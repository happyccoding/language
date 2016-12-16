using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace SingleListCS
{
    public class Node
    {
        public object Data { set; get; }
        public Node Next {set; get; }

        public Node(object data)
        {
            Data = data;
            Next = null;
        }
    }

    public class LinkedList
    {
        Node Head { set; get; }
        Node Tail { set; get; }


        public LinkedList()
        {
            Head = null;
            Tail = null;
        }

        public void AddToTail(Node data)
        {
            if (Head == null)
            {
                Head = data;
                Tail = data;
            }
            else
            {
                Tail.Next = data;
                Tail = data;
            }
        }

        public void removeLastNode()
        {
            Node prevNode = null;
            Node curNode = Head;
            while (curNode != Tail)
            {
                prevNode = curNode;
                curNode = curNode.Next;
            }

            Tail = prevNode;
            prevNode.Next = null;
        }

        public void Traverse()
        {
            Node curNode = Head;
            while (curNode != null)
            {
                Console.WriteLine(curNode.Data);
                curNode = curNode.Next;
            }
        }
    }

    class Program
    {
        static void Main(string[] args)
        {
            LinkedList list = new LinkedList();
            list.AddToTail(new Node("abc"));
            list.AddToTail(new Node("def"));
            list.Traverse();
            list.removeLastNode();
            Console.WriteLine("===");
            list.Traverse();
            Console.Read();
        }
    }
}
