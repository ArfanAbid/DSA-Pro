// program to check if array is sorted or not using recursion

#include<iostream>
using namespace std;
bool sorted(int arr [],int index,int length);
int main(){

    int arr[]={1,2,3,4,5}; // 1
    int arr[]={1,2,33,4,5}; // 0
    int length=sizeof(arr)/sizeof(arr[0]); // 0 -> False  , 1 -> True 

    cout<<sorted(arr,0,length);
}

bool sorted(int arr [],int index,int length){
    if(index==length-1){
        return true;
    }

    return arr[index]<arr[index+1] && sorted(arr,index+1,length);  // here array and length is same only index is increasing
}