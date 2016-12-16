function permutation(str1, str2) {
  var sortedStr1 = str1.split('').sort().toString();
  var sortedStr2 = str2.split('').sort().toString();
 
  if (!sortedStr1.localeCompare(sortedStr2)) return true;
  
  return false;
  
  
}

console.log(permutation("abc", "cba"));


