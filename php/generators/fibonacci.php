<?php
function fibonacci($position=1) {
    $prev = 0; 
    $current = 1;
    $i = 0;
    yield $i=>1;

    while($i < $position) {
        $current = $prev + $current;
        $prev = $current - $prev;
        $i++;
        yield $i=>$current;
    }
 
    return;
}


foreach(fibonacci(7) as $key => $value) {
    echo "{$key} => {$value}\n";
}

?>