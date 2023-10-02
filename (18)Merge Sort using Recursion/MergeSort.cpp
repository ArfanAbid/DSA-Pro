#include<iostream>
using namespace std;

void MergeSort(int arr[],int lo,int hi);
void Merge(int arr[],int mid,int lo,int hi);

int main(){  

	int arr[]={38, 27, 43,3, 9, 82, 10};
	// int arr[]={7,15,3,8};
    int length=sizeof(arr)/sizeof(arr[0]);
    MergeSort(arr,0,length-1);

    for (int i = 0; i < length; i++)
    {
        cout<<arr[i]<<" ";
    }
    
            
    }

void MergeSort(int arr[],int lo,int hi){
    if(lo<hi){
        int mid=lo+(hi-lo)/2;
        MergeSort(arr,lo,mid); // Left Tree
        MergeSort(arr,mid+1,hi); // Right Tree
        Merge(arr,mid,lo,hi);
    }
}   

void Merge(int arr[],int mid,int lo,int hi){

    int i=lo;
    int j=mid+1;
    int mix[hi-lo+1]; //create a new array for sorted elements
    int k=0; // for mix index

    while(i<=mid && j<=hi){
        if(arr[i]<arr[j]){
            mix[k]=arr[i];
            i++,k++;
        } else{
            mix[k]=arr[j];
            j++,k++;
        }

    }

    while(i<=mid){      // copy all remaining elements from arr[i] to mix array
        mix[k]=arr[i];
        k++,i++;
    }
    while(j<=hi){   // copy all remaining elements from arr[j] to mix array
        mix[k]=arr[j];
        k++,j++;
    }


    int size=sizeof(mix)/sizeof(mix[0]);  // put sorted elements back to orignal array
		for(int i=0,j=lo;i<size;i++,j++){
				arr[j]=mix[i];
			
		}

}