<?php

  $res = isUniqueChars("abcde");
  
  echo "result:".var_export($res, 1); ;

  function isUniqueChars($str){
    if (strlen($str) > 256) return false; 
    $check = array_fill(0, 255, false);
    $strArray = str_split($str);
    foreach ($strArray as $ch) 
    {
      $idx = ord($ch);
      if ($check[$idx] == true) 
      {
        return false;
      }
      else 
      {
        $check[$idx] = true;
      } 
    }
    return true;
  }

?>