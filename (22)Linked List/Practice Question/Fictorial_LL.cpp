// Create a program which first display a node u enter and display it .Next make fictorial of all the node u enter and display.

#include<iostream>
using namespace std;

class Node{   
public:         
    int data;
    Node* next;

    Node(int data) {    
        this->data = data; 
        this->next =nullptr;
    }

};
class LinkedList{
private:
// public:       // if we want to see head and tail in main then public it
    Node* head;
    Node* tail;
    int size;
public:

    LinkedList(){    // constructor
        this->head = nullptr;
        this->tail = nullptr;
        this->size = 0;
    }
                // From here make all the functions you want

    // Destructor                    // best practice to avoid memory leaks
    ~LinkedList() {
        Node* current = head;
        while(current != nullptr) {
            Node* temp = current;
            current = current->next;
            delete temp; 
    }
}
//Function for displaying linkedList
void display(){
    Node *temp= head;   // taking temp because otherwise it will change internal working of head  in this copy (temp) is set to head and moving one step forward
    while(temp != nullptr){
        cout<<temp->data<<" -> ";
        temp=temp->next; 
    }
    cout<<"NULL"<<endl;
}


// Function to insert at Frist or at head
void insertAtFirst(int data){
    Node* node =new Node(data);
    node->next=head;
    head=node;

    if(tail==nullptr){  // for first element  i.e if there is no element is present then obviously tail is nullptr so when new nde id added it is head and also a tail
        tail=head; 
    }
    size++;
}

int fictorial(int n){
    int fictorial=1;
    for(int i=1;i<=n;i++){
        fictorial*=i;
    }
    return fictorial;
}


};

int main(){  
    LinkedList list1;
    cout << "Before Fictorial : "<<endl;
    list1.insertAtFirst(2);
    list1.insertAtFirst(3);
    list1.insertAtFirst(4);
    list1.insertAtFirst(5);

    list1.display();  // displaying LinkedList

    LinkedList List2;

    
    cout << "After Fictorial : "<<endl;
    List2.insertAtFirst(List2.fictorial(2));
    List2.insertAtFirst(List2.fictorial(3));
    List2.insertAtFirst(List2.fictorial(4));
    List2.insertAtFirst(List2.fictorial(5));

    List2.display();
    

}