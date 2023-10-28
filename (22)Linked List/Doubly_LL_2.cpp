#include<iostream>
using namespace std;
                

class Node{
public:    
    int data;
    Node* next;
    Node* prev;

    Node(int data){
        this->data = data;
        this->next =nullptr;
        this->prev =nullptr;
    }
};

class DoubleLinkedList{
private:
    Node* head;
public:
    DoubleLinkedList(){
        this->head =nullptr;   // or by default it is assigned nullptr
    }


// Function for displaying the linkedlist
void display(){
    Node *node=head;
    while(node!=nullptr){
        cout<<node->data<<" -> ";
        node=node->next;

    }
    cout<<"NULL"<<endl;

    
}


// Function for inserting at first/ head
void insertAtFirst(int data){
    Node *node =new Node(data);
    node->next =head;
    node->prev =nullptr; 

    if(head!=nullptr){  // because if it the  first element inserted then it will give error
        head->prev =node; // so if there is already element present in LL then it will insert at head or at first
    }
    head=node;
}    



// function to insert at End  without using tail
void insertAtLast(int data){
    Node *node=new Node(data);
    Node *last=head;

    if(head==nullptr){ // If LL is empty or no node is present then 
        node->prev=nullptr;
        head=node;
        return;

    }
    while(last->next !=nullptr){
        last=last->next;
    }
    last->next=node;
    node->prev=last;


}

    Node* find(int value) {
        Node* node = head;
        while (node != nullptr) {
            if (node->data == value) {
                return node;
            }
            node = node->next;
        }
        return nullptr;
    }

    // Insert after a specific element
    void insertAfter(int after, int val) {
        Node* prev = find(after);

        if (prev == nullptr) {
            cout << "Node does not exist!" << endl;
            return;
        }

        Node* node = new Node(val);
        node->next = prev->next;
        node->prev = prev;
        prev->next = node;
        if (node->next != nullptr) {
            node->next->prev = node;
        }
    }
};
int main(){  
    DoubleLinkedList list;
    
    cout << "Insertion at first index--------" << std::endl;
    list.insertAtFirst(6);
    list.insertAtFirst(65);
    list.insertAtFirst(22);
    list.insertAtFirst(4);
    list.display();

    cout << "\nInsertion at last index--------" << std::endl;
    list.insertAtLast(44);
    list.display();

    cout << "\nInsertion after a specific element" << std::endl;
    list.insertAfter(22, 10);  // Specific index
    list.display();    
    }