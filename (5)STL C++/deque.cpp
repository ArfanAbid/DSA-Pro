/*
Similar to vector, deque supports dynamic resizing.
It provides efficient insertions and deletions at both the front and back.
*/

#include <iostream>
using namespace std;
#include <deque>

int main() {
    // Declare a deque of integers
    deque<int> numbers;

    // Add elements to the back of the deque
    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);

    // Add elements to the front of the deque
    numbers.push_front(0);

    // Access elements using the [] operator
    cout << "First element: " << numbers[0] << endl;
    cout << "Second element: " << numbers[1] << endl;
    cout << "Third element: " << numbers[2] << endl;

    // Access elements using the at() method
    cout << "Element at index 1: " << numbers.at(1) << endl;

    // Remove the last element
    numbers.pop_back();

    // Remove the first element
    numbers.pop_front();

    // Print the size of the deque
    cout << "Size after pop operations: " << numbers.size() << endl;

    // Iterate over the deque
    cout << "Elements in the deque: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    // Initialize a deque with specific values
    deque<int> more_numbers = {4, 5, 6};

    // Print elements of the new deque
    cout << "More numbers: ";
    for (int num : more_numbers) {
        cout << num << " ";
    }
    cout << endl;

}
