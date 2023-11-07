// Custom  Static Queue implementation
// using only one pointer 


#include<iostream>
#include <stdexcept>
using namespace std;
class CustomQueue{

    private:
        static const int MAX_SIZE = 10;
        int data[MAX_SIZE];
        int top=0;

    public:
        //Function to check  if a Queue is full or not
        bool isFull(){

            return top==MAX_SIZE;
        }    
        //Function to check  if a Queue is empty or not
        bool isempty(){
            return top==0;

        }
        //Function to insert items into the Queue
        bool push(int item){  //or Enqueue
            if(isFull()){
                cout<<"Queue is full!!";
                return false;
            }
            data[top]=item;
            top++;
            return true;
        }
    
        
        //Function to remove item from Queue
        int pop() {  // or Dequeue
            if (isempty()){
                throw runtime_error("CanNot pop from empy Queue!!!");
                
                }
                int removed=data[0];
                //shift the elements to left
                for (int i = 1; i < top; i++)
                {
                    data[i-1]=data[i];
                }
                
                top--;
                return removed;
        
        }


        int front(){
            if (isempty()){
                throw runtime_error("CanNot front from empy Queue");
                
                }
            return data[0]; 
        }            

    

};
                
int main(){  
    CustomQueue myQueue;

    myQueue.push(1);
    myQueue.push(2);
    myQueue.push(3);



    cout << "Top element: " << myQueue.front() << std::endl;

    
    cout << "Popped  element :" <<myQueue.pop()<<endl;
    cout << "Popped  element :" <<myQueue.pop()<<endl;
    cout << "Popped  element :" <<myQueue.pop()<<endl;

    // cout << "Popped  element :" <<myQueue.pop()<<endl; // ---> Exception error


    }
