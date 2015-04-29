window.onload = function () {
  
  /* IE getElementsByClassName() polyfill */
  if (typeof document.getElementsByClassName!='function') {
    document.getElementsByClassName = function() {
      var elms = document.getElementsByTagName('*');
      var ei = new Array();
      for (i=0;i<elms.length;i++) {
        if (elms[i].getAttribute('class')) {
          ecl = elms[i].getAttribute('class').split(' ');
          for (j=0;j<ecl.length;j++) {
            if (ecl[j].toLowerCase() == arguments[0].toLowerCase()) {
              ei.push(elms[i]);
            }
          }
        } else if (elms[i].className) {
          ecl = elms[i].className.split(' ');
          for (j=0;j<ecl.length;j++) {
            if (ecl[j].toLowerCase() == arguments[0].toLowerCase()) {
              ei.push(elms[i]);
            }
          }
        }
      }
      return ei;
    }
  }
  call_ner_api();
}


function call_ner_api (reset) {
  /* Do AJAX HTTP request */
  var query = getQueryParams(document.location.search);
  var original_location = window.location.toString().replace(/(\&reset|\?reset)$/, "");

  if (query.reset | reset) {
    var apiURL = "http://taibif.tw/ner/api.spcn.php?reset=1&url=" + encodeURIComponent(original_location);
  }
  else {
    var apiURL = "http://taibif.tw/ner/api.spcn.php?url=" + encodeURIComponent(original_location);
  }

  var httpRequest;

  if (window.XMLHttpRequest) {
    httpRequest = new XMLHttpRequest();
  } else if (window.ActiveXObject) {
    httpRequest = new ActiveXObject("Microsoft.XMLHTTP");
  }

  if (!httpRequest) {
    console.log('Giving up :( Cannot create an XMLHTTP instance');
    return false;
  }

  httpRequest.withCredentials = "true";
  httpRequest.onreadystatechange = function() { speciesNameExplorer(httpRequest, reset); };
  httpRequest.open('POST', apiURL, true);
  //httpRequest.setRequestHeader("Cookie",document.cookie);
  httpRequest.send('login='+checkLogin('e-info'));

}

function checkLogin (source) {
  var login = "";
  if (source == 'e-info') {
    var e = document.getElementsByClassName('leaf last');
    for (var idx in e) {
      ec = e[idx].childNodes;
      for (var cidx in ec) {
        if (ec[cidx].tagName == 'A') {
          if (ec[cidx].href == window.location.origin+'/logout') {
            login = ec[cidx].parentElement.parentElement.parentElement.parentElement.childNodes[1].childNodes[0].childNodes[0].textContent;
            break;
          }
        }
      }
      if (login != "") break;
    }
    return login;
  }
}

function getQueryParams(qs) {
  qs = qs.split("+").join(" ");
  var params = {},
      tokens, 
      re = /[?&]?([^=]+)=([^&]*)/g;

  while (tokens = re.exec(qs)) {
    params[decodeURIComponent(tokens[1])]= decodeURIComponent(tokens[2]);
  }
  return params;
}

function getCookie(cname) {
  var name = cname + "=";
  var ca = document.cookie.split(';');
  for(var i=0; i<ca.length; i++) {
    var c = ca[i];
    while (c.charAt(0)==' ') c = c.substring(1);
    if (c.indexOf(name) == 0) return c.substring(name.length,c.length);
  }
  return "";
}


/* Get species by scanning Chinese vernacular names in paragraphs */
function speciesNameExplorer(httpRequest, reset) {
  var matchedNames = '';

  if (httpRequest.readyState == 4) {
    if (httpRequest.status == 200) {
      matchedNames = JSON.parse(httpRequest.responseText);
      //console.log(matchedNames);
    } else {
      console.log('There was a problem with the request.');
    }
  }

  if (!matchedNames) {
    return false;
  }

  markMatchedChineseVernacularNames(matchedNames);
//  tagListBlockGenerate(matchedNames, reset);
  tooltipGenerate(matchedNames, reset);
}


function tagListBlockGenerate(matchedNames, reset) {
  //Generate the tag list block
  var blockDiv = document.getElementById('species-explorer');

  if (!blockDiv) {
    return false;
  }

  var tagList = document.createElement('ul');
  tagList.setAttribute('class', 'links inline');
  blockDiv.appendChild(tagList);

  for (var n = 0; n < matchedNames.length; n++) {
    if (matchedNames[n].scientific_name[0].namecode != 0) {
      var listItem = document.createElement('li');
      var spanWrapper = document.createElement('span');
      spanWrapper.setAttribute('class', 'tag species-span species-span-id-' + n);
      spanWrapper.setAttribute('rel', 'tag');
      spanWrapper.innerHTML = matchedNames[n].chinese_vernacular_name;
      listItem.appendChild(spanWrapper)
      tagList.appendChild(listItem);
    }
  }

}


function tooltipGenerate(matchedNames) {
  /* Build tooltips */

  var oldTooltipContainer = document.getElementById('tooltip-box-container');
  if (oldTooltipContainer) {
    oldTooltipContainer.destroy();
  }

  var tooltipBoxContainer = document.createElement('div');
  tooltipBoxContainer.setAttribute('id', 'tooltip-box-container');
  document.body.appendChild(tooltipBoxContainer);

  for (var n = 0; n < matchedNames.length; n++) {
    var newTooltipBox = document.createElement('div');
    newTooltipBox.setAttribute('id', 'species-tooltip-' + n);
    newTooltipBox.setAttribute('class', 'species-tooltip');
    tooltipBoxContainer.appendChild(newTooltipBox);

    var tooltipTitleContainer = document.createElement('div');
    tooltipTitleContainer.setAttribute('class', 'species-tooltip-title');
    newTooltipBox.appendChild(tooltipTitleContainer);

    var tooltipTitle = document.createElement('h2');
    tooltipTitle.setAttribute('id', 'species-tooltip-title-text-'+n);
    tooltipTitle.innerHTML = matchedNames[n].chinese_vernacular_name + '<small>ä»¥ä¸‹æ˜¯å¯èƒ½çš„ç‰©ç¨®è³‡è¨Š</small>';
    tooltipTitleContainer.appendChild(tooltipTitle);

    var tooltipContentContainer = document.createElement('div');
    tooltipContentContainer.setAttribute('class', 'species-tooltip-content');
    newTooltipBox.appendChild(tooltipContentContainer);

    var namesList = document.createElement('ul');
    for (var m = 0; m < matchedNames[n].scientific_name.length; m++) {
      var listItem = document.createElement('li');
      var anchor = document.createElement('a');
      anchor.innerHTML = matchedNames[n].scientific_name[m].name;
      anchor.setAttribute('href', 'http://taibif.tw/catalogue_of_life/name_code/' + matchedNames[n].scientific_name[m].namecode);
      anchor.setAttribute('target', '_blank');
      listItem.appendChild(anchor);
      namesList.appendChild(listItem);
    }

    tooltipContentContainer.appendChild(namesList);

    var closeButton = document.createElement('div');
    var closeLabel = document.createTextNode('â•³');
    closeButton.setAttribute('class', 'species-tooltip-close');
    closeButton.appendChild(closeLabel);
    newTooltipBox.appendChild(closeButton);

    closeButton.addEventListener('click', function() {
      this.parentElement.style.visibility = "hidden";
      this.parentElement.style.display = "none";
    });

    closeButton.addEventListener('click', function() {
      this.parentElement.style.visibility = "hidden";
      this.parentElement.style.display = "none";
    });

    // DEL BUTTON
    var delButton = document.createElement('div');
    delButton.setAttribute('id', 'species-tooltip-del-'+n);
    var delLabel = document.createTextNode('DEL');
    delButton.setAttribute('class', 'species-tooltip-del');
    delButton.appendChild(delLabel);
    newTooltipBox.appendChild(delButton);

    delButton.addEventListener('click', function() {
      var tip_id = this.id.split("species-tooltip-del-").pop();
      var titleToDel = document.getElementById("species-tooltip-title-text-"+tip_id).innerHTML;
      var vname = titleToDel.split("<small>")[0];
      removeMatchedChineseVernacularNames(vname, tip_id, this.parentElement);
    });

    // RESET BUTTON
    var resetButton = document.createElement('div');
    resetButton.setAttribute('id', 'species-tooltip-reset-'+n);
    var resetLabel = document.createTextNode('RESET');
    resetButton.setAttribute('class', 'species-tooltip-reset');
    resetButton.appendChild(resetLabel);
    newTooltipBox.appendChild(resetButton);

    resetButton.addEventListener('click', function() {
      var r = confirm("ç¢ºå®šé‡æ–°æŠ“å–ç‰©ç¨®å?");
      if (r) {
        call_ner_api (true);
      }
    });

    newTooltipBox.style.visibility = "hidden";
    newTooltipBox.style.display = "none";
  }

  var speciesSpans = document.getElementsByClassName("species-span");

  /* Toggle tooltip visibility */
  for (var s = 0; s < speciesSpans.length; s++) {
    speciesSpans[s].addEventListener("click", function(e) {
      var tooltipId = "species-tooltip-" + e.target.className.split("species-span-id-")[1];
      var tooltipDiv = document.getElementById(tooltipId);

      if (tooltipDiv.style.visibility == "visible") {
        tooltipDiv.style.visibility = "hidden";
        tooltipDiv.style.display = "none";
      } else {
        tooltipDiv.style.visibility = "visible";
        tooltipDiv.style.display = "block";
        tooltipPosition(tooltipDiv, e);
      }
    });
  }
}


function tooltipPosition(tooltipDiv, evt) {
  //console.log(document.body.clientWidth);
  //console.log(tooltipDiv.offsetWidth);
  //console.log(eventTarget);
  var spanOffset = getOffset(evt);
  console.log(spanOffset);
  tooltipDiv.style.position = "absolute";
  tooltipDiv.style.top = (spanOffset.posy + (evt.target.offsetHeight * 2)) + "px";

  /* æœƒè¶…å‡ºç¯„åœçš„æŠŠå®ƒåéŽä¾†åå·¦å‘ˆç¾ */
  if (tooltipDiv.offsetWidth + spanOffset.posx > document.body.clientWidth) {
    tooltipDiv.style.right = (document.body.clientWidth - spanOffset.posx) + "px";
    tooltipDiv.setAttribute('class', 'species-tooltip shiftright');
  } else {
    tooltipDiv.style.left = spanOffset.posx + "px";
    tooltipDiv.setAttribute('class', 'species-tooltip');
  }
}

function removeMatchedChineseVernacularNames(vname, id, tip) {
  var vernacular_name = vname;
  var tip_id = id;
  var tipToDestroy = tip;
  console.log(vname);

  /* Do AJAX HTTP request */
  var original_location = window.location.toString().replace(/(\&reset|\?reset)$/, "");
  var apiURL = "http://taibif.tw/ner/api.delete.php?vname="+encodeURIComponent(vernacular_name)+"&url=" + encodeURIComponent(original_location);

  var httpRequest;

  if (window.XMLHttpRequest) {
    httpRequest = new XMLHttpRequest();
  } else if (window.ActiveXObject) {
    httpRequest = new ActiveXObject("Microsoft.XMLHTTP");
  }

  if (!httpRequest) {
    console.log('Giving up :( Cannot create an XMLHTTP instance');
    return false;
  }

  httpRequest.withCredentials = "true";
  httpRequest.onreadystatechange = function() {
    if (httpRequest.readyState==4 && httpRequest.status==200) {
      console.log(httpRequest.responseText);
      if (httpRequest.responseText == 'VALID USER') {
        var r = confirm("ç¢ºå®šåˆªé™¤?");
        if (r) {
          var paragraphs = document.getElementsByTagName('p');
          for (var i = 0; i < paragraphs.length; i++) {
            var newHTML = paragraphs[i].innerHTML;
            if ( newHTML.match(vernacular_name) ) {
              var spanWrapper = document.createElement('span');
              spanWrapper.setAttribute('class', 'species-span species-span-id-' + tip_id);
              spanWrapper.appendChild(document.createTextNode(vernacular_name));

              newNewHTML = newHTML.replace(spanWrapper.outerHTML, vernacular_name);
              if (newNewHTML != newHTML) {
                paragraphs[i].innerHTML = newNewHTML;
                break;
              }
            }
          }
          tipToDestroy.destroy();
        }
      }
    }
    else if (httpRequest.readyState==4 && httpRequest.status==404) {
      console.log("Service is not ready");
    }
  };
  httpRequest.open('POST', apiURL, true);
  //httpRequest.setRequestHeader("Cookie",document.cookie);
  httpRequest.send('host='+window.location.host);
}



function markMatchedChineseVernacularNames(matchedNames) {
  /* Mark matched Chinese vernacular names */
  console.log(matchedNames);
  var paragraphs = document.getElementsByTagName('p');

  for (var j = 0; j < matchedNames.length; j++) {
    for (var i = 0; i < paragraphs.length; i++) {
      var div = document.createElement("div");
      div.innerHTML = paragraphs[i].innerHTML;
      var text = div.textContent || div.innerText || "";
      if ( text.match(matchedNames[j].chinese_vernacular_name) && matchedNames[j].scientific_name[0].namecode != 0 ) {
        var spanWrapper = document.createElement('span');
        spanWrapper.setAttribute('class', 'species-span species-span-id-' + j);
        spanWrapper.appendChild(document.createTextNode(matchedNames[j].chinese_vernacular_name));

        text = text.replace(matchedNames[j].chinese_vernacular_name, spanWrapper.outerHTML);
        div.innerHTML = div.innerHTML.replace(div.textContent, text);
        paragraphs[i].innerHTML = div.innerHTML;

        // ensure that once matched, then skip to next loop.
        break;
      }
    }
  }
}


/* Get absolute offset */
function getOffset(e) {
  var posx = 0;
  var posy = 0;

  if (!e) var e = window.event;

  if (e.pageX || e.pageY)   {
    posx = e.pageX;
    posy = e.pageY;
  }
  else if (e.clientX || e.clientY)  {
    posx = e.clientX + document.body.scrollLeft
      + document.documentElement.scrollLeft;
    posy = e.clientY + document.body.scrollTop
      + document.documentElement.scrollTop;
  }

  return { 'posx': posx, 'posy': posy };
}
