// Binary Search using Recursion

#include<iostream>
using namespace std;
int Binary(int arr[],int target,int start,int end);

int main(){

int arr[]={2,4,6,87,99,56};
int length=sizeof(arr)/sizeof(arr[0]);
int target=87;
int ans=Binary(arr,target,0,length-1);
cout<<ans;
}

int Binary(int arr[],int target,int start,int end){

    if (start>end){
        return -1;
    }
    int mid=start+(end-start)/2;
    
    if(target==arr[mid]){
        return mid;
    }

    if (target<arr[mid]){
        return Binary(arr,target,start,mid-1);
    }

    if (target>arr[mid]){
        return Binary(arr,target,mid+1,end);
    }

}
