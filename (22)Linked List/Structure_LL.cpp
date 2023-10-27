// Another Method

#include<iostream>
using namespace std;

class Node{
    public: 
        int data;
        Node* next;
        // constructor
        Node(int data){
            this->data = data;
            this->next =NULL;
        }
};

void InsertAtHead(Node* & head,int d){
    // creataed new node
    Node* temp = new Node(d);
    temp->next = head;
    head= temp;
}
void InsertAtTail(Node* & tail,int d){
    // creataed new node
    Node* temp = new Node(d);
    tail->next = temp;
    tail= temp;

}
void insertAtPosition(Node * &head,Node * &tail,int position,int d){
    // inshort insert at start / head
    if(position==1){
        InsertAtHead(head,d);
        return;
    }

    Node * temp=head;
    int count=1;
    while (count<position-1)            
    {
        temp=temp->next;
        count++;
    }

    // inshort inserting at last position
    if(temp->next==NULL){
        InsertAtTail(tail,d);
        return;
    }    

    // creating a node for d
    Node *nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;

    
}
void print(Node * &head){
    Node*  temp=head;

    while (temp != NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;

    
}
                
int main(){  

    // create a new node 
        Node* node1 = new Node(10); 
        // cout<<node1->data<<endl;
        // cout<<node1->next<<endl;

    // head pointing to to node1
        Node * head=node1;
        // print(head);
        // InsertAtHead(head,12);
        // InsertAtHead(head,15);
        // print(head);

        
    // insert at  end /tail
        Node *tail=node1;
        print(head);
        InsertAtTail(tail,12);
        InsertAtTail(tail,15);
        cout<<"Insert at end /tail:     ";
        print(head);

    // insert at position
        cout<<"Insert at position :     ";
        insertAtPosition(head,tail,4,22);
        print(head);

    cout<<"Head : "<<head->data<<endl;    
    cout<<"Tail : "<<tail->data<<endl;    

    }