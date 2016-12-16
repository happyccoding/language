/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package singlylinkedlist;

/**
 *
 * @author Hyunm
 */
public class SinglyLinkedList {

    SinglyLinkedListNode head;
    SinglyLinkedListNode tail;
    
    public SinglyLinkedList ()
    {
        this.head = null;
        this.tail = null;
    }
    
    public void addToTail(SinglyLinkedListNode node) {
        if (head == null) {
            head = node;
            tail = node;
        } else {
            tail.next = node;
            tail = node;
        }        
    }
    
   public void removeHead(){
       if (head != null) {
           head = head.next;
       } 
   }
    
    public void removeLastNode(SinglyLinkedListNode node) {
        SinglyLinkedListNode prevTail = null; 
        SinglyLinkedListNode cur = head;
        while(cur != tail) {
            prevTail = cur;
            cur = cur.next;
        }
        tail = prevTail;
        tail.next = null;
    }
    
    public void traverse() {
        SinglyLinkedListNode cur = head;
        while (cur != null)
        {
            System.out.println(cur.value);
            cur = cur.next;
        }
    }
    
    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        
        SinglyLinkedList list = new SinglyLinkedList();
        list.addToTail(new SinglyLinkedListNode(1));
        list.addToTail(new SinglyLinkedListNode(2));
        
        SinglyLinkedListNode node = new SinglyLinkedListNode(3);
        list.addToTail(node);
        list.traverse();
        
        System.out.println("=====");
        
        list.removeLastNode(node);
        list.removeHead();
        list.traverse();
        
    }
    
    
    
}
