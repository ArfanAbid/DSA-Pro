// Custom  Static Stack implementation


#include<iostream>
#include <stdexcept>
using namespace std;
class CustomStack{

    private:
        static const int MAX_SIZE = 10;
        int data[MAX_SIZE];
        int top=-1;

    public:
        //Function to check  if a stack is full or not
        bool isFull(){

            return top==MAX_SIZE-1;
        }    
        //Function to check  if a stack is empty or not
        bool isempty(){
            return top==-1;

        }
        //Function to insert items into the stack
        bool push(int item){
            if(isFull()){
                cout<<"Stack is full!!";
                return false;
            }
            top++;
            data[top]=item;
            return true;
        }
    
        
        //Function to remove item from stack
        int pop() {
            if (isempty()){
                throw runtime_error("CanNot pop from empy stack!!!");
                
                }
                int removed=data[top];
                top--;
                return removed;
        
        }


        int peek(){
            if (isempty()){
                throw runtime_error("CanNot peek from empy stack");
                
                }
            return data[top]; 
        }            

    

};
                
int main(){  
    CustomStack myStack;

    myStack.push(1);
    myStack.push(2);
    myStack.push(3);


    cout << "Top element: " << myStack.peek() << std::endl;

    
    cout << "Popped  element :" <<myStack.pop()<<endl;
    cout << "Popped  element :" <<myStack.pop()<<endl;
    cout << "Popped  element :" <<myStack.pop()<<endl;

    // cout << "Popped  element :" <<myStack.pop()<<endl; // ---> Exception error


    }
