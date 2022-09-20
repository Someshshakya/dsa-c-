#include<iostream>
using namespace std;

class Node {
    public:
        int data;
        Node *next;
};

// function to print the linked list

void printList(Node* n){
    while (n!=NULL){
        cout << n->data << " ";
        n = n->next;   
    };
    cout << endl;
};

/*@###################### Insert nodes in Linked List ###################### */
// 1. To insert the node in the beging or making the new node head of the list;
void push(Node** head_ref,int new_data){
    // 1. allocate the node.
    Node *new_node = new Node();
    // 2. put in the data.
    new_node->data = new_data;
    // 3. make new node of as head node.
    new_node->next = (*head_ref);
    // 4. move the head to point to.
    (*head_ref) = new_node;

}

//2. to insert the node after a given node 5 steps.
void insertAfter(Node * prev_node,int new_data){
    // 1. check if the given prvious node in null.
    if (prev_node==NULL){
        cout << "The previous gievn node can not be null. ";
        return;
    }
    // 2. allocate new node
    Node *new_node = new Node();
    // 3. putt in the data.
    new_node->data = new_data;
    // 4. make next of new_node as next of privous node.
    new_node->next = prev_node->next;
    //5. make the next of prev node as new node
    prev_node->next = new_node;
}

// 3. add a node at the end. 6 steps needed
void append(Node** head_ref,int new_data){
    // 1. allocate node
    Node *new_node = new Node();
    // used in step 5.
    Node *last = *head_ref;
    // 2. putt in the data.
    new_node->data = new_data;
    // 3. this node is going to be the last node, so make the next of it as NUll
    new_node->next = NULL;
    // 4. if the linked list is empty then make the node as head node.
    if (*head_ref==NULL){
        *head_ref = new_node;
        return;
    }
    // 5. else traverse till the last node
    while(last->next!=NULL){
        last = last->next;
    }
    // 6. change the last of the next node.
    last->next = new_node;
    return;
}
/*@###################### Search of nodes in Linked List ###################### */
// 1. check value x is present in the linkedlist or not;

bool search(Node* head, int x){
    Node *current = head; // Initialize current
    while(current != NULL){
        if(current->data == x){
            return true;
        }
        current = current->next;
    }
    return false;
}
// Driver's code
int main(){
    Node *head = NULL;
    Node *second = NULL;
    Node *third = NULL;
    
    // alocate three nodes in the heap
    head = new Node();
    second = new Node();
    third = new Node();

    /*represents any random value.
    Data is random because we haven’t assigned
    anything yet */

    head->data = 1; // assign data in first node
    head->next = second; // Link first node with the second node;

    second->data = 2; // assign data in the second node
    second->next = third; // link next node ;

    third->data = 3;
    third->next = NULL;
    printList(head);
    append(&head, 45);
    printList(head);
    push(&head, 8);
    printList(head);
    insertAfter(head->next, 43);
    printList(head);
    search(head, 45) ? cout << "Yes " : cout << "No";

    return 0;
}