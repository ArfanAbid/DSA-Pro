#include<iostream>
using namespace std;
int GetMax(int *arr);  
int GetMin(int *arr);
int main(){  
        int a[]={2,55,44};
        int *arr=a;
        int max=GetMax(arr);
        int min=GetMin(arr);
        cout<<"The Maximum element in the array is : "<<arr[max]<<endl;
        cout<<"The Mimimum element in the array is : "<<arr[min]<<endl;

    }
int GetMax(int *arr){
    if ((arr[0]>arr[1]) && (arr[0]>arr[2]) ){
        return 0;
    }
    else if ((arr[1]>arr[0]) && (arr[1]>arr[2]) ){
        return 1;
    }
    else{
        return 2;
    }
}    

int GetMin(int *arr){
    if ((arr[0]<arr[1]) && (arr[0]<arr[2]) ){
        return 0;
    }
    else if ((arr[1]<arr[0]) && (arr[1]<arr[2]) ){
        return 1;
    }
    else{
        return 2;
    }
}    