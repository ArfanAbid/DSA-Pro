#include<iostream>
#include<stack>
using namespace std;
                
int main(){  
        stack<int> stack;

// Inserting Elements         
        stack.push(33);    
        stack.push(22);    
        stack.push(66);    
        stack.push(4);    
        stack.push(55);    
        stack.push(4);    

//  Removing Elements 
        cout<<stack.top()<<endl;
        stack.pop();
        cout<<stack.top()<<endl;
        stack.pop();
        cout<<stack.top()<<endl;
        stack.pop();
        cout<<stack.top()<<endl;
        stack.pop();
        cout<<stack.top()<<endl;
        stack.pop();
        cout<<stack.top()<<endl;
        stack.pop();
        

    }