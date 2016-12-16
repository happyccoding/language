<?php

  // php code is wrapped in <?php tags

  class Node {
    public $data;
    public $next;
    function __construct($data){
      $this->data = $data;
      $this->next = null;
    }
  }

  class LinkedList {
    public $head;
    public $tail;
    
    function __construct(){
      $this->head = null;
      $this->tail = null;
    }
    
    function addToTail($data) {
      $node = new Node($data);
      if ($this->head == null) {
        $this->head = $node;
        $this->tail = $node;
      } else {
        $this->tail->next = $node;
        $this->tail = $node;
      }
    }
    
    function removeLastNode() {
      $curNode = $this->head;
      while($curNode != $this->tail) {
        $prevNode = $curNode;
        $curNode = $curNode->next;
      }
      
      $this->tail = $prevNode;
      $this->tail->next = null;
      
    }
    
    function traverse() {
      $curNode = $this->head;
      while($curNode != null) {
        echo $curNode->data."\n";
        $curNode = $curNode->next;
      }
    }
  }

  $list = new LinkedList();
  $list->addToTail("abc");
  $list->addToTail("def");
  $list->traverse();
  echo "===\n";
  $list->removeLastNode();
  $list->traverse();
  
  /*for ( $i = 0; $i < 5; $i++) {
    echo "Hello, World\n";
  }*/
?>
