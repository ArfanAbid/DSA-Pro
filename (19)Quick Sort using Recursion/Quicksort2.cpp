#include<iostream>
using namespace std;
void QuickSort(int arr[], int low,int hi);
int partition(int arr[],int low,int hi ) ; 

int main(){  

        // int arr[]={5,4,3,2,1};
            int arr[]={22,4,55,67,43,3};
            int length=sizeof(arr)/sizeof(arr[0]);
            QuickSort(arr,0,length-1);
            for (int i = 0; i < length; i++)
            {
                cout<<arr[i]<<" ";
            }
                
    }


void QuickSort(int arr[], int low,int hi){
    if(low<hi){
        int pidx=partition(arr,low,hi); 

        // Recursively sort elements before and after partition.  After getting correct position of pivot 
        QuickSort(arr,low,pidx-1); // Elements less than pivot
        QuickSort(arr,pidx+1,hi);  // Elements greater than pivot
    }



}

int partition(int arr[],int low,int hi )  {  // return pivot index

    int pivot=arr[hi];
    int i=low-1;  

    for (int j = low; j < hi; j++)
    {
        if(arr[j] < pivot){
            i++;
            // swap
            swap(arr[i],arr[j]);
        }
    }
    // now all small elemants come before pivot now put pivot at correct index
    i++;
    swap(arr[i],arr[hi]);  // pivot = arr[high]
    return i; // pivot index
    
}