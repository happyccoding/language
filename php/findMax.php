<?php
  $arrays = [1, 2, 3, 4, 5];

  $maxValue = findMax($arrays);
  echo $maxValue;

  function findMax($arrays)
  {
    $maxValue = -1;
    foreach ($arrays as $array) {
      if ($array > $maxValue)
      {
        $maxValue = $array;
      }
    }
    
    return $maxValue;
  }
?>