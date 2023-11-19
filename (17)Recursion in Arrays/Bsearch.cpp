// Program for rotated Binary Search   :(//)

#include<iostream>
using namespace std;
int search(int arr[],int target,int s,int e);
int main(){  
        int arr[]={5,6,7,8,9,1,2,3};
        int length=sizeof(arr)/sizeof(arr[0]);
        int target=8;
        cout<<search(arr,target,0,length-1);    
    }

    int search(int arr[],int target,int s,int e){

        if(s>e){
            return -1;
        }
        int mid=s+(e-s)/2;
        if(arr[mid]==target){
            return mid;
        }
    // first case
    if(arr[s]<=arr[mid]){
        if(target >=arr[s] && target <=arr[mid]){
                return search(arr,target,s,mid-1);
        }else{
            return search(arr,target,mid+1,e);
        }

    
    }
     // Second case
    if(target >=arr[mid] && target <=arr[e]){
            return search(arr,target,mid+1,e);
        }
        return search(arr,target,s,mid-1);
    }