// Heap Sort is a comparison-based sorting algorithm that uses a binary heap data structure to sort elements. It's an efficient algorithm with a time complexity of 𝑂(𝑛log𝑛), making it suitable for large datasets.
// Max-Heap sorting implementation
#include <iostream>
#include <vector>
using namespace std;

void heapify(vector<int>& arr,int n,int index){ // same as HeapifyDown
    int largest=index;
    int leftChild=2*index+1; 
    int rightChild=2*index+2;

    if(leftChild< n && arr[leftChild]>arr[largest]){
        largest=leftChild;
    }
    if(rightChild< n && arr[rightChild]>arr[largest]){
        largest=rightChild;
    }
    if(largest!=index){
        swap(arr[index],arr[largest]);
        heapify(arr,n,largest);
    }
    
}

void heapSort(vector<int>& arr){
    int n=arr.size();
    // n / 2 - 1 is the index of the last non-leaf node in the array. Nodes after n / 2 - 1 are all leaf nodes, which don't need heapifying because they don't have children.
    for(int i=n/2-1;i>=0;i--){ //The purpose of this loop is to build a max-heap from the array.
        heapify(arr,n,i);
    }

    for(int i=n-1;i>0;i--){
        swap(arr[0],arr[i]);
        heapify(arr,i,0);// Call heapify on the reduced heap
    }
}

void printArray(vector<int>array){
    for(auto x: array){
        cout<<x<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int>arr={12, 11, 13, 5, 6, 7};

    cout << "Unsorted array: ";
    printArray(arr);

    heapSort(arr);

    cout << "Sorted array: ";
    printArray(arr);

}

