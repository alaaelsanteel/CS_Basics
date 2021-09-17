# Linked list example


# the Node class
class Node(object):
    def __init__(self, val):
        self.val = val
        self.next = None

    def get_data(self):
        return self.val

    def set_data(self, val):
        self.val = val

    def get_next(self):
        return self.next

    def set_next(self, next):
        self.next = next


# the LinkedList class
class LinkedList(object):
    def __init__(self, head=None):
        self.head = head
        self.count = 0

    def get_count(self):
        return self.count

    def insert(self, data):
        # TODO: insert a new node
        new_node = Node(data)
        new_node.set_next(self.head)   #the current head of this list
        self.head=new_node       #hed point to the new node
        self.count +=1              #the number of nodes increase



    def find(self, val):
        # TODO: find the first item with a given value
        item = self.head
        while(item != None):   #while there's a ead 
          if item.get_data() == val :   #if the item equals the value that we're looking for >>retern the item
            return item
          else:
              item = item.get_next  #otherwise get the next value
          
        return None

    def deleteAt(self, idx):
        # TODO: delete an item at given index
        if idx > self.count-1:
            return
        if idx ==0:   #if we're deleting the head then make the head the next item in the list
            self.head=self.head.get_next ()   
        else:        # otherwise we have to check that the node is before the one we want to delete
            tempidx=0
            node =self.head
            while tempidx < idx-1:
              node =node.get_next()
              tempidx+=1
            node.set_next(node.get_next().get_next())  #set the next field to point to the node that's after the one  we want to delete
            self.count -=1
    def dump_list(self):
        tempnode = self.head
        while (tempnode != None):
            print("Node: ", tempnode.get_data())
            tempnode = tempnode.get_next()


# create a linked list and insert some items
itemlist = LinkedList()
itemlist.insert(38)
itemlist.insert(49)
itemlist.insert(13)
itemlist.insert(15)
itemlist.dump_list()

# exercise the list

#print("Item count: ", itemlist.get_count())
#print("Finding item: ", itemlist.find(13))
#print("Finding item: ", itemlist.find(78))

# delete an item
itemlist.deleteAt(3)
print("Item count: ", itemlist.get_count())
print("Finding item: ", itemlist.find(38))
itemlist.dump_list()
