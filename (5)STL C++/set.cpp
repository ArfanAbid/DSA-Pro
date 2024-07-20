/* 
Represents a collection of unique elements. It is usually implemented as a balanced binary search tree.
set stores unique elements, meaning no duplicates are allowed.
Elements in a set are automatically sorted in ascending order by default.
O(log n).
*/

#include <iostream>
using namespace std;
#include <set>

int main() {
    // Declare a set of integers
    set<int> numbers;

    // Insert elements into the set
    numbers.insert(5);
    numbers.insert(2);
    numbers.insert(8);
    numbers.insert(5); // Duplicate elements are ignored

    // Print the elements in the set
    cout << "Elements in the set: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    // Check if an element exists in the set
    if (numbers.find(2) != numbers.end()) {
        cout << "2 is in the set" << endl;
    } else {
        cout << "2 is not in the set" << endl;
    }

    // return 1 if present else 0
    cout<<numbers.count(2)<<endl;

    // Remove an element from the set
    numbers.erase(2);

    // Print the elements in the set after removal
    cout << "Elements in the set after erasing 2: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    // Print the size of the set
    cout << "Size of the set: " << numbers.size() << endl;

}
