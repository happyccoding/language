class Node :
    def __init__(self, data):
        self.data = data
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = None
        self.tail = None
    
    def addToTail(self, data):
        node = Node(data)
        if self.head == None :
            self.head = node
            self.tail = node
        else:
            self.tail.next = node
            self.tail = node
            
    def traverse(self):
        curNode = self.head;
        while curNode is not None:
            print curNode.data
            curNode = curNode.next
            
def say_hello():
    print 'Hello, World'

for i in xrange(5):
    say_hello()

print "\n"    
list = LinkedList()

list.addToTail("abcd")
list.addToTail("efgh")
list.traverse()

