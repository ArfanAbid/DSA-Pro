#include<iostream>
using namespace std;

void MergeSort(int arr[],int s,int e);
void Merge(int arr[],int mid,int s,int e);

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

void MergeSort(int arr[],int s,int e){
    if(s<e){
        int mid=s+(e-s)/2;
        MergeSort(arr,s,mid); // Left Tree
        MergeSort(arr,mid+1,e); // Right Tree
        Merge(arr,mid,s,e);
    }
}   

void Merge(int arr[],int mid,int s,int e){

    int i=s;
    int j=mid+1;
    int merged[e-s+1]; //create a new array for sorted elements
    int k=0; // for merged index

    while(i<=mid && j<=e){
        if(arr[i]<arr[j]){
            merged[k++]=arr[i++];
            
        } else{
            merged[k++]=arr[j++];
            
        }

    }

    while(i<=mid){      // copy all remaining elements from arr[i] to merged array
        merged[k++]=arr[i++];
    
    }
    while(j<=e){   // copy all remaining elements from arr[j] to merged array
        merged[k++]=arr[j++];
    
    }


    int size=sizeof(merged)/sizeof(merged[0]);  // put sorted elements back to orignal array
		for(int i=0,j=s;i<size;i++,j++){
				arr[j]=merged[i];
			
		}

}