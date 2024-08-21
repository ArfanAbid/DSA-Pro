#include <iostream>
#include <vector>
using namespace std;

class MinHeap {
private:
    vector<int> heap;

    void heapifyDown(int index) {
        int smallest = index;
        int leftChild = 2 * index + 1;
        int rightChild = 2 * index + 2; 

        // If the left child exists and is smaller than the current smallest, update smallest
        if (leftChild < heap.size() && heap[leftChild] < heap[smallest])
            smallest = leftChild;

        // If the right child exists and is smaller than the current smallest, update smallest
        if (rightChild < heap.size() && heap[rightChild] < heap[smallest])
            smallest = rightChild;

        // If the smallest is not the root (i.e., index), swap and continue heapifying down
        if (smallest != index) {
            swap(heap[index], heap[smallest]); /
            heapifyDown(smallest); // Recursively heapify the affected sub-tree
        }
    }

    void heapifyUp(int index) {
        int parent = (index - 1) / 2;

        if (index && heap[parent] > heap[index]) {
            swap(heap[index], heap[parent]);
            heapifyUp(parent);
        }
    }

public:
    void insert(int element) {
        heap.push_back(element);
        heapifyUp(heap.size() - 1);
    }

    void removeMin() {
        if (heap.size()) {
            heap[0] = heap.back();
            heap.pop_back();
            heapifyDown(0);
        } else {
            cout << "Heap is empty!" << endl;
        }
    }

    int getMin() const {
        if (heap.size()) return heap.front();
        return -1; // Indicating an empty heap
    }

    void printHeap() const {
        for (int x : heap) cout << x << " ";
        cout << endl;
    }
};

int main() {
    MinHeap minHeap;

    minHeap.insert(10);
    minHeap.insert(20);
    minHeap.insert(5);
    minHeap.insert(30);

    cout << "Min-Heap array: ";
    minHeap.printHeap();

    cout << "Minimum element: " << minHeap.getMin() << endl;

    minHeap.removeMin();
    cout << "Min-Heap after removing min: ";
    minHeap.printHeap();

}
