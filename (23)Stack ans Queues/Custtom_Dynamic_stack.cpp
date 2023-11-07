// Custom  Dynamic Stack implementation

// same as static stack just modify push function

#include<iostream>
#include <stdexcept>
using namespace std;
class CustomDynamicStack{

    private:
        int *dataArray;
        int top;
        int size;


    public:
    // Constructor
    CustomDynamicStack(){  // whenever the object is being created then this constructer is being called
        size=10; 
        dataArray=new int[size]; // let initial default capacity is 
        top=-1;
    }
    ~CustomDynamicStack() {
        delete[] dataArray; // Destructor to release the dynamically allocated memory
    }

        //Function to check  if a stack is full or not
        bool isFull(){

            return top==size-1;
        }    
        //Function to check  if a stack is empty or not
        bool isempty(){
            return top==-1;

        }
        //Function to insert items into the stack
        void push(int item){
            if(isFull()){
                // stack is full, need to resize it
                int newSize=size*2;    // double the size as of previous array
                int *newDataArray=new int[newSize]; // created a new array of double size
                for (int i = 0; i <= top; i++)  //copy all the elements from previous array
                { 
                    newDataArray[i]=dataArray[i];
                }
                delete[] dataArray;
                dataArray = newDataArray;
                size=newSize;
                                
            }
            top++;
            dataArray[top]=item;
            
        }
    
        
        //Function to remove item from stack
        int pop() {
            if (isempty()){
                throw runtime_error("Cannot pop from empy stack!!!");
                
                }
                int removed=dataArray[top];
                top--;
                return removed;
        
        }


        int peek(){
            if (isempty()){
                throw runtime_error("CanNot peek from empy stack");
                
                }
            return dataArray[top]; 
        }            

    

};
                
int main(){  
    CustomDynamicStack myStack;

    myStack.push(1);
    myStack.push(2);
    myStack.push(3);
    myStack.push(4);
    myStack.push(5);
    myStack.push(6);
    

    cout << "Top element: " << myStack.peek() << std::endl;

    
    cout << "Popped  element :" <<myStack.pop()<<endl;
    cout << "Popped  element :" <<myStack.pop()<<endl;
    cout << "Popped  element :" <<myStack.pop()<<endl;
    cout << "Popped  element :" <<myStack.pop()<<endl;
    cout << "Popped  element :" <<myStack.pop()<<endl;
    cout << "Popped  element :" <<myStack.pop()<<endl;
    

    }
