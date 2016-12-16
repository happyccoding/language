<?php

  function permutation($str1, $str2)
  {
    $newStr1 = str_split($str1);
    $newStr2 = str_split($str2);
    
    sort($newStr1);
    sort($newStr2);
   
    if (!strcmp(implode ($newStr1) , implode ($newStr2))) return "true";
    
    return "false";
  }

  $res = permutation("abc", "bac");
    
  echo $res;

?>
