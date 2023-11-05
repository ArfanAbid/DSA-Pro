#include<iostream>
#include<queue>
using namespace std;
                
int main(){  
        queue<int> queue;
// Insertion         
        queue.push(22);    
        queue.push(5);    
        queue.push(62);    
        queue.push(24);    
        queue.push(39);    
// removing
        cout<<queue.front()<<endl;
        queue.pop();
        cout<<queue.front()<<endl;
        queue.pop();
        cout<<queue.front()<<endl;
        queue.pop();
        cout<<queue.front()<<endl;
        queue.pop();
        cout<<queue.front()<<endl;
        queue.pop();
        

        }