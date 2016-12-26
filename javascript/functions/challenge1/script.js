var socialMedia = {
  facebook : 'http://facebook.com/viewsource',
  twitter: 'http://twitter.com/planetoftheweb',
  flickr: 'http://flickr.com/planetotheweb',
  youtube: 'http://youtube.com/planetoftheweb'
};

var socialList = function(argInput, argOutput) {
  var  output = '<ul>';

  for (var idx in argInput) {
    output+= '<li><a href="' + argInput[idx] + '">' +
      '<img src="images/' + idx + '.png" alt="icon for '+idx+'">' +
      '</a></li>';
  }
  output+= '</ul>';
  
  /*for (var i = myList.length - 1; i >= 0; i--) {
    myList[i].innerHTML = output;
  };*/
  
  for (var idx in argOutput)
  {
	  myList[idx].innerHTML = output;
  };
};


myList = document.querySelectorAll('.socialmediaicons');

socialList(socialMedia, myList);