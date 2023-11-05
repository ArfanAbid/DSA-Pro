#include<iostream>
#include<deque>
using namespace std;
                
int main(){  
    deque<int> deque;
    deque.push_front(22); // 1        
    deque.push_front(44);  // 0 
    deque.push_back(65);  // 2
    deque.push_back(54);  // 3

    cout<<deque.front()<<endl;
    deque.pop_front();
    cout<<deque.front()<<endl;
    deque.pop_front();
    cout<<deque.front()<<endl;
    deque.pop_front();



    }