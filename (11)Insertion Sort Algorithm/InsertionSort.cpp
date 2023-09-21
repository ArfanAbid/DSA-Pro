#include<iostream>
using namespace std;

static void Insertion(int arr[],int length);
static void swap(int arr[],int first, int second);

int main(){
    int arr[]={5,3,4,1,2};
    int length=sizeof(arr)/sizeof(arr[0]);

    Insertion(arr,length);
    
    //printing

    cout<<"[";
    for (int  i = 0; i < length; i++)
    {
        cout<<arr[i];
        if(i<length-1){
            cout<<",";
        } 
    }
    cout<<"]";

}

static void Insertion(int arr[], int length){
    for (int i = 0; i < length-1; i++) // or i<=length-2
    {
        for (int j = i+1; j > 0; j--)
        {
            if (arr[j]<arr[j-1]){
                swap(arr,j,j-1);
            }else{
                break;
            }
        }
        
    }
    
}



static void swap(int arr[],int first, int second){
    int temp = arr[first];
    arr[first]=arr[second];
    arr[second]=temp;
}