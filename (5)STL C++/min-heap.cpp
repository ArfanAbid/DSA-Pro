//You can create a min-heap by using a custom comparator.
#include <iostream>
using namespace std;
#include <queue>
#include <vector>
#include <functional>

int main() {
    // Declare a min-heap priority queue of integers
    priority_queue<int, vector<int>, greater<int>> pq;

    // Add elements to the priority queue
    pq.push(3);
    pq.push(5);
    pq.push(1);
    pq.push(8);

    // Access the top element
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
