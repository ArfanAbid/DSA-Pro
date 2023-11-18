#include<iostream>
using namespace std;
class Node{
public:
    int value;   
    int height;
    Node *left;
    Node *right;
    Node(int d){
        this->value=d;
        this->height=0;
        left=NULL;
        right=NULL;
    }
    int getValue(){
        return value;
    }

};


class BST{

    Node *root;
public:
    BST(){
        this->root=NULL;
    }
    // Function to check empty or not
    bool isEmpty(){
        return root==NULL;
    }
    // Function to return height
    int height(Node * node){
        if(node==NULL){
            return -1;
        }
        return node->height;
    }
    // Function to check Balcnced or Not
    bool balanced(Node * node){
        if(node==NULL){
            return true;
        }
        return abs(height(node->left)-height(node->right))<=1 && balanced(node->left) && balanced(node->right);
    }

    // Function to insert values to BST
    void insert(int value){
        root=insert(value,root);
    }
    Node *insert(int value,Node *node){
        if(node==NULL){
            Node *Newnode=new Node(value);
            return Newnode; // Return the newly created node
        }
        if(value < node->value){
            node->left=insert(value,node->left);
        }
        if(value > node->value){
            node->right=insert(value,node->right);
        }

        node->height = max(height(node->left), height(node->right)) + 1;  
        return node; // Return the current node after insertion

    }

    // Function to display
    void display(){
        display(this->root,"Root Node is: ");
    }
    void display(Node *node,string str){
        if(node==NULL){
        return;
        }
        cout<<str<<node->value<<endl;
        display(node->left,"Left child of: "+to_string( node->value)+" is : ");
        display(node->right,"Right child of: "+to_string( node->value)+" is :");
    }

    // Function to insert using array
    void insertArray(int arr[],int size){
        for (int i = 0; i < size; i++) {
            this->insert(arr[i]);
        }
    }
    // Function to insert Sorted Arrayy
    void insertSortedArray(int arr[],int start,int end){
        if(start>=end){
            return;
        }
        int mid=(start+end)/2;
        this->insert(arr[mid]);
        insertSortedArray(arr,start,mid);
        insertSortedArray(arr,mid+1,end);
    }

    

};


int main(){

    BST bst;
    // bst.insert(33);
    // bst.insert(52);
    // bst.insert(22);
    // bst.insert(221);
    // bst.insert(41);
    
    // bst.display();

                // OR  insert using array
    // int arr[]={5,2,7,1,4,6,9,8,3,10};
    // int size=10;
    // bst.insertArray(arr,size);
    // bst.display();


    int arr2[]={1,2,3,4,5,6,7,8,9,10};
    bst.insertSortedArray(arr2,0,10);
    bst.display();




}