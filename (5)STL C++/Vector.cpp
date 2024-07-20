/* 
Like arrays in C++, vectors can change size dynamically, allowing elements to be added or removed.
Insertion and deletion at the end are efficient (amortized constant time). However, inserting or deleting elements in the middle or at the beginning is costly (linear time).
*/

#include <iostream>
using namespace std;
#include <vector>

int main() {
    // Declare a vector of integers
    vector<int> numbers;

    // Add elements to the vector
    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);

    // Access elements using the [] operator
    cout << "First element: " << numbers[0] << endl;
    cout << "Second element: " << numbers[1] << endl;
    cout << "Third element: " << numbers[2] << endl;

    // Access elements using the at() method
    cout << "Element at index 1: " << numbers.at(1) << endl;

    // Remove the last element
    numbers.pop_back();

    // Print the size of the vector
    cout << "Size after pop_back: " << numbers.size() << endl;

    // Iterate over the vector
    cout << "Elements in the vector: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    // Initialize a vector with specific values
    vector<int> more_numbers = {4, 5, 6};

    // Print elements of the new vector
    cout << "More numbers: ";
    for (int num : more_numbers) {
        cout << num << " ";
    }
    cout << endl;

    // Initialize a vector with value 1 and size 5
    vector<int> num(5,1);
    cout << "Numbers: ";
    for (int n : num) {
        cout << n << " ";
    }
    cout << endl;


}
