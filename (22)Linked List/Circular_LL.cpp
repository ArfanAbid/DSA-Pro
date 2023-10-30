#include<iostream>
using namespace std;
        
class Node{
public:    
    int data;
    Node *next;
    Node(int data) {
        this->data = data;
        this->next =nullptr;
    }
};
class CircularLinkedList{
private:
    Node *head;
    Node *tail;
public:
    CircularLinkedList(){
        this->head =nullptr;
        this->tail =nullptr;

    }
    // Destructor
     ~CircularLinkedList() {    // best practice to avoid memory leak
        Node* current = head;
        while(current != nullptr) {
        Node* temp = current;
        current = current->next;
        delete temp;
    }
}






// Function to display
void display(){
    Node *temp=head;
    if(head!=nullptr){
        do{
            cout<<temp->data<<" -> ";
            temp=temp->next;
        }while(temp!=head);
        cout<<"START"<<endl;
    }
}

// Function to insert at tail
void Insert(int data){
    Node* node=new Node(data);
    if(head==nullptr){
        head = node;
        tail = node;
    }

    node->next=head;
    tail->next=node;
    tail=node;

}

// Function to delete the head
void deleteFirst(){
    if(head==nullptr){
        return;
    }
    Node *temp=head;
    head=head->next;
    tail->next=head;
    delete temp;
}

// Function to delete last node
void deleteLast() {
    if (head == nullptr) {
        return;
    }

    Node *toDelete = tail;

    if (head == tail) {// If there's only one node in the list, set head and tail to nullptr
        head = nullptr;
        tail = nullptr;
    } else {
        Node *temp = head;
        while (temp->next != tail) {
            temp = temp->next;
        }
        tail = temp;
        tail->next = head;
    }

    delete toDelete;
}

// Function to delete a particular node
void deleteNode(int val) {
    if(head == nullptr) { 
    // LL is empty
    return; 
    }

    if(head->data == val) {
    // If head node is to be deleted
    Node* temp = head; 
    head = head->next;
    tail->next = head; 
    delete temp;
    return;
    }

    Node* prev = nullptr; 
    Node* curr = head;

    while(curr != nullptr && curr->data != val) {
    prev = curr;
    curr = curr->next; 
    }

    if(curr == nullptr) {
    // Node not found
    return;
    }

    prev->next = curr->next;

    if(curr == tail) {
    tail = prev;
    }

    delete curr;
}

};
int main(){  
        CircularLinkedList list;

        // Inserting elements to end
        list.Insert(2);
        list.Insert(44);
        list.Insert(66);
        list.Insert(6);
        list.Insert(77);
        list.display();


        list.deleteFirst();
        list.display();
        
        list.deleteLast();
        list.display();
    
        list.deleteNode(44);
        list.display();
            
    }