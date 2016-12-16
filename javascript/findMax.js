var arrays = [1, 4, 5, 6, 7];
console.log(findMax(arrays));

function findMax(arrays)
{
  var maxValue = -1;
  var i=0;
  
  for (i=0; i<arrays.length; i++)
  {  
    if (arrays[i] > maxValue)
    {
      maxValue = arrays[i];
    }
  }
  return maxValue;
}