# Linked-Lists
Aim:
To study and implement Linked list

Theory:
A linked list is a linear data structure where each element, called a "node," contains a data part and a reference (or pointer) to the next node in the sequence. Unlike arrays, linked lists are not stored in contiguous memory locations.

Types of Linked Lists:
Singly Linked List: Each node contains data and a pointer to the next node.
The first node is called the head of the list.
The last node’s next pointer is NULL, indicating the end of the list.
The traversal of the list is unidirectional; you can only traverse it from the head to the end.
Operations like insertion, deletion, and traversal are straightforward but limited in terms of backward traversal.
Doubly Linked List: Each node contains data, a pointer to the next node, and a pointer to the previous node.
The first node’s previous pointer is NULL, and the last node’s next pointer is NULL.
You can traverse the list both forward and backward.
The list is more complex due to the extra pointer, but it is also more flexible.
Circular Linked List: The last node in the list points to the first node, making the list circular.
There is no NULL pointer to indicate the end of the list.
The list can be traversed endlessly unless specifically stopped.
Circular nature allows for a loop-like structure.
Advantages of Linked Lists:
Dynamic size: Linked lists grow or shrink dynamically as elements are inserted or deleted.
Efficient Insertions/Deletions: Elements can be inserted or removed from the list without shifting any other elements, unlike arrays.
Codes:
Program 1:
Algorithm :
Define the Link class: The class has two data members: a. data: An integer variable to store the data. b. next: A pointer of type Link* that points to the next node in the linked list (initially NULL).
Define a constructor Link(int num) which takes an integer num as input, initializes the data with num, and sets next to NULL.
In the main function: Create a new node of the Link class using dynamic memory allocation (new). Pass the value 6 to the constructor, which initializes the data to 6 and next to NULL. Print the data of the node, which will output the value 6. Print the next pointer of the node, which will output 0 (NULL).
Code:
#include<iostream>
using namespace std;

class Link {
    public:
    int data;
    Link* next;

    Link(int num){
        data=num;
        next=NULL;
    }
};

int main(){
    Link* l1 = new Link(6);
    cout<<l1->data<<"   "<<l1->next;
}
Output:

![Screenshot 2024-10-20 165812](https://github.com/user-attachments/assets/e65c7910-3a91-4afe-8dde-51c21e0912a0)


#Program 3:
Algorithm:
Define the Link class:

-The class contains two data members: -data: To store the data of the node. -next: A pointer to the next node in the list, initially set to NULL. -The constructor Link(int num) takes an integer num to initialize the data of the node and sets next to NULL.

2.Define insert_head() function: -This function inserts a new node at the head of the linked list. -A new node is created using the input data. -The next pointer of the new node is set to point to the current head of the list. -The head pointer is updated to point to the new node.

3.Define disp() function: -This function traverses and prints the linked list. -It starts from the head of the list and prints each node's data followed by ->. -The traversal continues until the next pointer of the current node is NULL, at which point "NULL" is printed to signify the end of the list.

4.In the main function:

Initialize the head pointer of the list to NULL. -Call insert_head() to add nodes with data 30, 32, and 35 to the head of the list, one by one. -After each insertion, call the disp() function to display the current state of the list.
Code:
#include<iostream>
using namespace std;

class Link {
    public:
    int data;
    Link* next;

    Link(int num){
        data=num;
        next=NULL;
    }
};
void insert_head(Link* &head, int data){
    Link* new_node=new Link(data);
    new_node->next = head;
    head = new_node;
}
void disp(Link* head){
    Link* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    Link* head = NULL;
    insert_head(head, 30);
    disp(head);
    insert_head(head, 32);
    disp(head);
    insert_head(head, 35);
    disp(head);
}
Output:

![Screenshot 2024-10-20 165928](https://github.com/user-attachments/assets/1a7c54da-ffa7-4bcc-bef3-3d8d1f86dc4f)

#Conclusion:
We learnt about basics of linked lists and it's implementation.

