#include<iostream>
using namespace std;

//Imp Note:  When given no.s from range 1,N 
// If given 1-N then apply Cyclic Sort like[20,24,23,22,21] ,[55,57,59,56,58]  also consider in mind It must contain contineous otherwise this Algo  willl not run e.g[33,44,53,77,89]

static void Cyclic(int arr[],int length);

static void swap(int arr[], int first,int second);

int main(){
   int arr[]={5,3,4,1,2};
    int length=sizeof(arr)/sizeof(arr[0]);

   Cyclic(arr,length);
    
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

static void Cyclic(int arr[],int length){
    int i=0;
    while(i<length){
        int correct=arr[i]-1;
        if(arr[i] != arr[correct]){
            swap(arr,i,correct);
    }else{
        i++;
    }
}
}


static void swap(int arr[], int first,int second){
    int temp=arr[first];
    arr[first]=arr[second];
    arr[second]=temp;
}
