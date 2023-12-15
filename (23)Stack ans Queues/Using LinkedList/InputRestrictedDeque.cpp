// An input-restricted deque is one where deletion can be made from both ends, but insertion can be made at one end only. 
// Mainly the following three basic operations are performed on input restricted queue:

// insertRear(): Adds an item at the rear of the queue. 
// deleteFront(): Deletes an item from the front of the queue. 
// deleteRear(): Deletes an item from rear of the queue.

#include<iostream>
using namespace std;

class Node{
public:    
    int data;
    Node* next;
    Node(int d){
        data=d;
        next=NULL;
    }
};
class DequeueUsingLinkedList{
    Node* head;
    Node* tail;
public:
    DequeueUsingLinkedList(){
        head=NULL;
        tail=NULL;
    }

    void insertAtLast(int value){
        Node* node=new Node(value);
        if(head==NULL){
            head=node;
        }else{
        tail->next=node;
        }
        tail=node;
    }
    void deleteFirst(){
        if(head==NULL){
            return;
        }
        Node* todelete=head;
        head=head->next;
        delete todelete;
    }
    void deleteLast(){
        if(tail==NULL){

            cout<<"No Element to return";
            return;
        }
        Node* current=head;
        Node* todelete=tail;
        while (current->next != tail)
        {
            current=current->next;
        }
        tail=current;
        tail->next=NULL;
        delete todelete;
    }
    int peek(){
        if(head==NULL){
            cout<<"No Element to return";
            return -1;
        }
        return head->data;
    }

    bool isEmpty(){
        if(head==NULL){
            return true;
        }
        return false;

    }
    void display() {
        if (head == NULL) {
            cout << "Dequeue is empty." << endl;
            return;
        }
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

};



int main(){
    DequeueUsingLinkedList dequeue;
    int choice, value;

    while (true){
    
        cout << "\nMenu:\n";
        cout << "1. Insert an item\n";
        cout << "2. Delete from start\n";
        cout << "3. Delete from end\n";
        cout << "4. Display all values\n";
        cout << "5. Exit from program\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to insert: ";
                cin >> value;
                dequeue.insertAtLast(value);
                break;
            case 2:
                dequeue.deleteFirst();
                break;
            case 3:
                dequeue.deleteLast();
                break;
            case 4:
                cout << "Values in the dequeue: ";
                dequeue.display();
                break;
            case 5:
                cout << "Exiting program.\n";
                exit(0);
                break;
            default:
                cout << "Invalid choice! Please enter a valid option.\n";
        }
    } 

}


//  An output-restricted deque is one where insertion can be made at both ends, but deletion can be made from one end only.