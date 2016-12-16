console.log(isUniqueChars("abcedd"));

function isUniqueChars(str)
{
  if (str.length > 256) return false;
  var check = new Array(256);
  for (var i=0; i<check.length; i++)
  {
    check[i] = false;
  }
  
  var strArray = str.split('');
  for (var i=0; i<strArray.length; i++) {
    var idx = strArray[i].charCodeAt();
    if (check[idx]==true) 
    {
      return false;
    }
    else 
    {
      check[idx]=true;
    }
  }
  return true;
}