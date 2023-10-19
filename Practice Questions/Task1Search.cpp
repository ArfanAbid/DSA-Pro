// Write a program a sequential searching in an array.( Pass an array and number to function, function should return index of number if present in array)

#include<iostream>
using namespace std;;
int search(int arr[],int length,int target);

int main(){
    int arr[]={2,5,7,13,66,22};
    int length=sizeof(arr)/sizeof(arr[0]);
    int target=66;
    int ans=search(arr,length,target);
    if(ans!=-1){
    cout<<"The number "<<target<<" is present at index : "<<ans<<endl;
    }else{
    cout<<"The number "<<target<<" is not present in the Array"<<endl;
    }

}

int search(int arr[],int length,int target){
    for (int i = 0; i < length; i++){
        if(arr[i]==target){
            return i;
        }
    
    }

    return -1;  // Target not found 
}