// Max-Heap implementation 
#include <iostream>
#include <vector>
using namespace std;

class MaxHeap {
private:
    vector<int> heap;

    void heapifyUp(int index) {
        int parent = (index - 1) / 2;

        if (heap[parent] < heap[index]) {
            swap(heap[index], heap[parent]);
            heapifyUp(parent);
        }
    }

    void heapifyDown(int index) {
        int largest = index;
        int leftChild = 2 * index + 1;
        int rightChild = 2 * index + 2;
        // If the left child exists and is greater than the current largest, update largest
        if (leftChild < heap.size() && heap[leftChild] > heap[largest]) {
            largest = leftChild;
        }
        // If the right child exists and is greater than the current largest, update largest
        if (rightChild < heap.size() && heap[rightChild] > heap[largest]) {
            largest = rightChild;
        }
        // If the largest is not the root (i.e., index), swap and continue heapifying down
        if (largest != index) {
            swap(heap[index], heap[largest]);
            heapifyDown(largest); // Don't get confuse we have reaplaced values at that index not the index so the index remain there so Recursively heapify the affected sub-tree
        }
    }

public:

    void insert(int element) {
        heap.push_back(element);
        heapifyUp(heap.size() - 1);
    }

    void removeMax() {
        if (heap.size()) {
            heap[0] = heap.back(); // place last element in root i.e at index 0 OR heap[0]=heap[heap.size()-1];
            heap.pop_back();   // removing last element or heap[heap.size()-1]
            heapifyDown(0);
        } else {
            cout << "Heap is empty !!!" << endl;
        }
    }

    void printHeap() {
        for (int i = 0; i < heap.size(); i++) {
            cout << heap[i] << " ";
        }
    }

    int getMax() {
        if (heap.size()) {
            return heap[0]; // or heap.front()
        }
        return -1;
    }
};

int main() {
    MaxHeap maxHeap; // creating an instance of the class

    maxHeap.insert(10);
    maxHeap.insert(20);
    maxHeap.insert(5);
    maxHeap.insert(30);

    cout << "Max-Heap array: ";
    maxHeap.printHeap();
    cout << endl;

    cout << "Maximum element: " << maxHeap.getMax() << endl;

    maxHeap.removeMax();
    cout << "Max-Heap after removing max: ";
    maxHeap.printHeap();
}
