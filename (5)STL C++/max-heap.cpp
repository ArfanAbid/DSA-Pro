/*
The priority_queue in C++ is an STL container adaptor that provides constant time lookup of the largest (by default) element. It's typically implemented as a binary heap, which is a complete binary tree where each node is greater than or equal to its children (for a max-heap).
By default, priority_queue is a max-heap, meaning the largest element is always at the top.  O(log n).

*/

#include <iostream>
using namespace std;
#include <queue>
#include <vector>

int main() {
    // Declare a max-heap priority queue of integers
    priority_queue<int> pq;

    // Add elements to the priority queue
    pq.push(3);
    pq.push(5);
    pq.push(1);
    pq.push(8);

    // Access the top element will give us largest element insertes in the priority queue
    cout << "Top element: " << pq.top() << endl;

    // Remove the top element 
    pq.pop();

    // Print the new top element
    cout << "New top element after pop: " << pq.top() << endl;

    // Print all elements in the priority queue
    cout << "Elements in the priority queue: ";
    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;

    return 0;
}
