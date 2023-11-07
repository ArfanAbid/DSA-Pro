// Circular Dynamic Queue implementation


#include<iostream>
#include <stdexcept>
using namespace std;
class DynamicCircularQueue{

    private:
        int *data;
        int dataSize;
        int end;
        int front;
        int size;

    public:
    DynamicCircularQueue(){
        dataSize=10;
        data=new int[dataSize];
        end=0;
        front=0;
        size=0;

    }
    ~DynamicCircularQueue(){
            delete[] data;
    }
        //Function to check  if a Queue is full or not
        bool isFull(){

            return size==dataSize;
        }    
        //Function to check  if a Queue is empty or not
        bool isempty(){
            return size==0;

        }
        //Function to insert items into the Queue
        bool push(int item){  //or Enqueue
            if(isFull()){
                // stack is full, need to resize it
                int newSize=dataSize*2;    // double the size as of previous array
                int *newData=new int[newSize]; // created a new array of double size
                for (int i = 0; i <= size; i++)  //copy all the elements from previous array
                { 
                    newData[i]=data[(front+i) % dataSize];    // we know that array is full so use remainder
					            }
                delete[] data;
                front=0;
                end=dataSize;
                data = newData;
                size=newSize;
                                
            }
            data[end] = item;
            end = (end + 1) % dataSize;
            size++;
            return true;
        } 
    
        
        //Function to remove item from Queue
        int pop() {  // or Dequeue
            if (isempty()){
                throw runtime_error("Cannot pop from empy Queue!!!");
                
                }
                int removed=data[front];
                front++;
                front=front % dataSize;
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
    DynamicCircularQueue myQueue;

    myQueue.push(1);
    myQueue.push(2);
    myQueue.push(3);


    cout << "Top element: " << myQueue.Front() << std::endl;

    
    cout << "Popped  element :" <<myQueue.pop()<<endl;
    cout << "Popped  element :" <<myQueue.pop()<<endl;
    cout << "Popped  element :" <<myQueue.pop()<<endl;



    }
