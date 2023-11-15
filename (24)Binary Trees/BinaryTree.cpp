#include<iostream>
using namespace std;
class Node{
public:    
    int value;
    Node *left;
    Node *right;
    Node(int val){
        this->value = val;
        this->left = NULL;   
        this->right = NULL;
    }
};

class BinaryTree{
private:    
    Node* root;
public:
    BinaryTree(){
        this->root = NULL;
    }

    // insert Elemants:
    void populate(){
        cout<<"Enter the root node : ";
        int val;
        cin >> val;
        this->root = new Node(val);
        populate(root);
    }

    void populate(Node* node){
        cout<<"Do you want to enter left of "<<node->value<<endl;
        bool left ;
        cin >> left; // 
        if(left){
            cout<<"Enter the value of left of "<<node->value<<endl;
            int val;
            cin >> val;
            node->left = new Node(val);
            populate(node->left);

        }
        cout<<"Do you want to enter right of "<<node->value<<endl;
        bool right;
        cin >> right; 
        if(right){
            cout<<"Enter the value of right of "<<node->value<<endl;
            int val;
            cin >> val;
            node->right = new Node(val);
            populate(node->right);

        } 


    }
    void display(){
        display(root,"");
    }
    void display(Node* node,string indent){
        if(node==NULL){  // Base condition
            return;
        }
        cout << indent << node->value << std::endl;
        display(node->left, indent + "\t");
        display(node->right, indent + "\t");
    }

};


int main(){
    BinaryTree tree;
    tree.populate();
    tree.display();
    return 0;
}