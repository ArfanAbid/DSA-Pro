// Write a program to implement Binary search. Count numbers of comparison you have made to search particular element.

#include<iostream>
using namespace std;;
int Bsearch(int arr[],int length,int target,int &comparison);

int main(){
    int arr[]={2,5,7,13,66,78}; // Array Must be Sorted
    int length=sizeof(arr)/sizeof(arr[0]);
    int target=5;
    int comparison=0;
    int ans=Bsearch(arr,length,target,comparison);
    if(ans!=-1){
    cout<<"The number "<<target<<" is present at index : "<<ans<<endl;
    cout << "Number of comparisons made: " << comparison << endl;
    }else{
    cout<<"The number "<<target<<" is not present in the Array"<<endl;
    cout << "Number of comparisons made: " << comparison << endl;
    }

}

int Bsearch(int arr[],int length,int target,int &comparison){  // &comparison Pass by Reference
    int start = 0;
    int end = length-1;
    if(start>end){
        return -1;
    }

    while(start <= end){
        int mid=start+(end-start)/2;
        comparison++;

        if(target==arr[mid]){
            return mid;
        }
        if (target<arr[mid]){
            end=mid-1;
        }else{
            start=mid+1;
        }

    }
    return -1;

    
}