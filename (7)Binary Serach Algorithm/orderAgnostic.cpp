#include<iostream>
using namespace std;

static int orderAgnosticBS(int arr[],int length,int target);

int main(){
    // For sorted array in accending order
// int arr[]= {-18,-12,-4,0,2,4,15,16,18,22,45,89};// Acending
int arr[]= {88,77,65,55,44,32,23,16,10,4,3,0,-4,-12,-18};// descending
int target=-4;
int length=sizeof(arr)/sizeof(arr[0]);
int ans=orderAgnosticBS(arr,length,target);
cout<<"The target value is found at index : "<<ans;

}

// return the index 
// retuen -1 if it doed not found
static int orderAgnosticBS(int arr[],int length,int target){
    int start=0;
    int end=length-1;
//find whether the array is accending or descending
bool isAccending;
if(arr[start]<arr[end]){
    isAccending=true;
}else{
    isAccending=false;
}

    while(start<=end){
        //find the middle element

        // (start+end) may exceed int range
        int mid=start+(end-start)/2;    // this will give index of mid array 

        if(arr[mid]==target){
            return mid; 
        }
        if (isAccending) {
            if(target<arr[mid]) {// will lie on the left side 
                end=mid-1;    
            }
            else { // will lie on the right side
                start=mid+1;
            } 
        }
        else {
            if(target>arr[mid]) {// will lie on the left side 
                end=mid-1;    
            }
            else { // will lie on the right side
                start=mid+1;
            }
        }
}
return -1;

}