// Implement Queue using LinkedList

// Approach:
            // In Push Function  we have to insert at last,So in Stack as well as in Queue insertion is at last 
            // In pop punction we have to remove from first i.e head
            // In peek Function we have to return the head

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
class queueUsingLinkedList{
    Node* head;
    Node* tail;
public:
    queueUsingLinkedList(){
        head=NULL;
        tail=NULL;
    }

    void push(int value){
        Node* node=new Node(value);
        if(head==NULL){
            head=node;
            tail=node;
            return;
        }
        tail->next=node;
        tail=node;
    }
    void pop(){
        if(head==NULL){
            return;
        }
        Node* todelete=head;
        head=head->next;
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


};



int main(){
    
    queueUsingLinkedList queue;
    queue.push(1);
    queue.push(2);
    queue.push(3);
    queue.push(4);

    cout<<"Queue is empty: "<< queue.isEmpty()<<endl;

    // display all elements
    while(!queue.isEmpty()){
        cout<<queue.peek()<<endl;
        queue.pop();
    }
    
    cout<<"Queue is empty: "<< queue.isEmpty();

}