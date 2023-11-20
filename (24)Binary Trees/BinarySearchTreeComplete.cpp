#include<iostream>
#include<queue>
using namespace std;
class Node{
public:
    int data;
    Node *left;
    Node *right;
    Node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};

class BST{
    Node *root;
    public:
    BST(){
        this->root=NULL;
    }
    // Function to insert values
    void insert(int value){
        root=insert(value,root);
    }
    Node* insert(int value,Node *node){
        if(node==NULL){
            Node* newNode=new Node(value);
            return newNode;
        }
        if(value>node->data){
            node->right=insert(value,node->right);
        }else{
            node->left=insert(value,node->left);
        }
        return node;
    }
    
    // Level Order Traversal
    void levelOrder(){
        levelOrder(root);
    }
    void levelOrder(Node *root){
        if(root == NULL){  // Tree is empty
            return;
        }
        queue<Node*> q;
        q.push(root);
        q.push(NULL);
        while(!q.empty()){
            Node *temp=q.front();
            q.pop();
            if(temp==NULL){
                cout<<endl;
                if(q.empty()){   // no elements remaining
                    break;
                }else{
                    q.push(NULL);    // if not empty then we khow there are elenents present so add Null 
                }
            
            }else{
                cout<<temp->data<<" ";
                if(temp->left!=NULL){
                    q.push(temp->left);
                }
                if(temp->right!=NULL){
                    q.push(temp->right);
                }
            }

        
        }

    }

                           // Types of Traversals

// i) Pre ordered Travals
void preOrder(){
    preOrder(root);
}

void preOrder(Node* node){
    if(node==NULL){
        return;
    }
    cout<<node->data<<" ";
    preOrder(node->left);
    preOrder(node->right);
}

// ii) In Order Travals

void inOrder(){
    inOrder(root);
}

void inOrder(Node* node){
    if(node==NULL){
        return;
    }
    inOrder(node->left);
    cout<<node->data<<" ";
    inOrder(node->right);
}

// iii) Post Order Travals

void postOrder(){
    postOrder(root);
}

void postOrder(Node* node){
    if(node==NULL){
        return;
    }
    postOrder(node->left);
    postOrder(node->right);
    cout<<node->data<<" ";
}

};

int main(){
    BST bst;
    bst.insert(10);
    bst.insert(9);
    bst.insert(21);
    bst.insert(7);
    bst.insert(27);
    bst.insert(5);
    bst.insert(4);
    
    cout<<"Printing Level order traversal"<<endl;
    bst.levelOrder();
    cout<<endl;
    cout<<"Printing Pre order traversal"<<endl;
    bst.preOrder();
    cout<<endl;
    cout<<"Printing In order traversal"<<endl;
    bst.inOrder();
    cout<<endl;
    cout<<"Printing Post order traversal"<<endl;
    bst.postOrder();



}