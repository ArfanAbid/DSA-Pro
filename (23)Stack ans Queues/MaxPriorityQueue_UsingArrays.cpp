        // Priority Queue W.R.T MAX (Maximum element is givem priority)
#include<iostream>
using namespace std;

class PriorityQueue{
private:
    static const int MAX_SIZE=10;
    int i,front,rear;
    int arr[MAX_SIZE];
public:
    PriorityQueue(){
        i=0;
        front=0;
        rear=0;
    }   
    // function to check is empty or not
    bool isEmpty(){
        return rear==0;
    }
    // function to check is full or not
    bool isFull(){
        return rear==MAX_SIZE-1;
    }
    // function to display the queue
    void displayQueue(){
        for (int i = 0; i < rear; i++)
        {
            cout<<arr[i]<<" ";
        }
        
    }
    // function to insert
    void insert(int item){
        if(isFull()){ // Queue is full
            cout<<"Queue is full";
            return;
        }else{
            i=rear;
            while(i!=0 && item>arr[i-1]){  // arr[i-1] because at i which is rear no element is inserted and here elements are inserted till rear-1 or i-1
                arr[i]=arr[i-1];
                i--;
            }
        arr[i]=item;
        rear++;
        }
        
    }
    // Function to delete item
    void deleteItem(){
        if(isEmpty()){
            cout<<"Queue is empty";
            return;
        }else{
            i=front;
            while(i<rear){
                arr[i]=arr[i+1];
                i++;
            }
            rear--;
        }
    }

    void peek(){
        if(isEmpty()){
            cout<<"Queue is empty";
            return;
        }else{
            cout<<arr[front]<<" ";
        }
    }
};
int main(){
    PriorityQueue queue;
    queue.insert(1);
    queue.insert(8);
    queue.insert(10);
    queue.insert(2);
    queue.insert(5);

    cout << "Queue elements: ";
    queue.displayQueue();
    cout << endl;

    // Delete an item from the queue
    queue.deleteItem();

    cout << "Queue after deletion: ";
    queue.displayQueue();
    cout << endl;

    cout << "Front element of the queue: ";
    queue.peek();



}