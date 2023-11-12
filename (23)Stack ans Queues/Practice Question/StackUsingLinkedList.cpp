// Implement Stack using LinkedList

// Approach:
            // In Push Function  we have to insert at last,So in Stack as well as in Queue insertion is at last 
            // In pop punction we have to remove from last i.e tail 
            // In top Function we have to return the tail
            
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
class StackUsingLinkedList{
    Node* head;
    Node* tail;
public:
    StackUsingLinkedList(){
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
        if(tail==NULL){
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

    int top(){
        if(tail==NULL){
            cout<<"No Element to return";
            return -1;
        }
        return tail->data;
    }

    bool isEmpty(){
        return head==NULL;

    }


};



int main(){
    
    StackUsingLinkedList Stack;
    Stack.push(1);
    Stack.push(2);
    Stack.push(3);
    Stack.push(4);
    
    cout<<"Stack is empty: "<< Stack.isEmpty()<<endl;

    // display all elements
    while(!Stack.isEmpty()){
        cout<<Stack.top()<<endl;
        Stack.pop();
    }
    
    cout<<"Stack is empty: "<< Stack.isEmpty();

}