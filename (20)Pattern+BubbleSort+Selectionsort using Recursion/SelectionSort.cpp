#include<iostream>
using namespace std;
                
void SelectionSort(int arr[],int r,int c,int max);
int main(){  
    int arr[]={42,33,232,1};
    int length=sizeof(arr)/sizeof(arr[0]);
    SelectionSort(arr,length,0,0);
    for (int i = 0; i < length; i++)
    {
        cout<<arr[i]<<" ";
    }
        
    }

void SelectionSort(int arr[],int r,int c,int max){
    if(r==0){
        return;
    
    }
    if(c<r){
        if(arr[c]>arr[max]){
            SelectionSort(arr,r,c+1,c);
        }else{
        SelectionSort(arr,r,c+1,max);
        }
    }else{
        swap(arr[max],arr[r-1]);
        SelectionSort(arr,r-1,0,0);
        
    }
}       