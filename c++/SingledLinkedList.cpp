#include <iostream>

using namespace std;

class Node {
private:
  int data;
  Node *next;
public:
  Node(int value) 
  { 
    data = value;
    next = NULL;
  }

  int getData() {
    return data;
  }

  Node *getNext() {
    return next;
  }

  void setNext(Node *node) {
    next = node;
  }
};

class LinkedList {
private:
  Node *head;
  Node *tail;
public:

  LinkedList() {
    head = NULL;
    tail = NULL;
  }

  void addToTail(int value) {
    Node *node = new Node(value);
    if (head == NULL) {
      head = node;
      tail = node;
    }
    else {
      tail->setNext(node);
      tail = node;
    }
  }
  
  void removeLastNode() {
    //find the prev of tail
    Node *prevNode = NULL;
    Node *curNode = head;
    while (curNode != tail) {
      prevNode = curNode;
      curNode = curNode->getNext();
    }
    
    tail = prevNode;
    tail->setNext(NULL);
  }

  void traverse() {
    Node *curNode = head;
    while (curNode != NULL) {
      cout << curNode->getData() << "\n";
      curNode = curNode->getNext();
    }
  }



};

int main() {

  LinkedList *list = new LinkedList();
  list->addToTail(1);
  list->addToTail(3);
  list->addToTail(2);
  list->traverse();
  list->removeLastNode();
  list->traverse();
  
}