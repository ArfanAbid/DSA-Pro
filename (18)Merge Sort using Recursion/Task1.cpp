#include<iostream>
using namespace std;
void MergeSort(int arr[],int start, int end);
void Merge(int arr[],int start,int mid,int end);

int main(){
	int arr[]={38, 27, 43,3, 9, 82, 10};
	int length=sizeof(arr)/sizeof(arr[0]);
	MergeSort(arr,0,length-1);
	
	for(int i=0;i<length;i++){
		cout<<arr[i]<<" ";
	}

}
void MergeSort(int arr[],int start, int end){
	// index compares
	if(start>=end){
		return;
	}
	int mid=start+(end-start)/2;   
	MergeSort(arr,start,mid);
	MergeSort(arr,mid+1,end);
	Merge(arr,start,mid,end);
	
}

void Merge(int arr[],int start,int mid,int end){
	int merged[end-start+1];        
	
	int idx1=start;
	int idx2=mid+1;
	int x=0;
	
	while(idx1<=mid && idx2<=end){
		if(arr[idx1]<=arr[idx2]){
			merged[x++]=arr[idx1++];
		}else{
			merged[x++]=arr[idx2++];
		}
	}
		while(idx1<=mid){
		merged[x++]=arr[idx1++];
		}
		while(idx2<=end){
			merged[x++]=arr[idx2++];
		}
		
		int size=sizeof(merged)/sizeof(merged[0]);
		for(int i=0,j=start;i<size;i++,j++){
				arr[j]=merged[i];
			
		}
		
	}

