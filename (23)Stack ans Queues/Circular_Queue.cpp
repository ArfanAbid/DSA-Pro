// Circular Queue implementation


#include<iostream>
#include <stdexcept>
using namespace std;
class CircularQueue{

    private:
        static const int MAX_SIZE = 10;
        int data[MAX_SIZE];
        int end=0;
        int front=0;
        int size=0;

    public:
        //Function to check  if a Queue is full or not
        bool isFull(){

            return size==MAX_SIZE;
        }    
        //Function to check  if a Queue is empty or not
        bool isempty(){
            return size==0;

        }
        //Function to insert items into the Queue
        bool push(int item){  //or Enqueue
            if(isFull()){
                cout<<"Queue is full!!";
                return false;
            }
            data[end]=item;
            end++;
            end=end % MAX_SIZE;
            size++;
            return true;
        }
    
        
        //Function to remove item from Queue
        int pop() {  // or Dequeue
            if (isempty()){
                throw runtime_error("CanNot pop from empy Queue!!!");
                
                }
                int removed=data[front];
                front++;
                front=front % MAX_SIZE;
                size--; 
                return removed;
        
        }


        int Front(){
            if (isempty()){
                throw runtime_error("CanNot front from empy Queue");
                
                }
            return data[front]; 
        }            

    

};
                
int main(){  
    CircularQueue myQueue;

    myQueue.push(1);
    myQueue.push(2);
    myQueue.push(3);


    cout << "Top element: " << myQueue.Front() << std::endl;

    
    cout << "Popped  element :" <<myQueue.pop()<<endl;
    cout << "Popped  element :" <<myQueue.pop()<<endl;
    cout << "Popped  element :" <<myQueue.pop()<<endl;



    }
