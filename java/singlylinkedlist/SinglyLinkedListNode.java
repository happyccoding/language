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


public class SinglyLinkedListNode {
    Object value;
    SinglyLinkedListNode next = null;
    public SinglyLinkedListNode(Object value){
        this.value = value;
        this.next = null;
    }
}
