#include<iostream>
using namespace std;

static void selection(int arr[],int length);
static int getMaxIndex(int arr[],int start,int end);
static void swap(int arr[],int first, int second);

int main(){
    int arr[]={4,5,3,1,2};
    int length=sizeof(arr)/sizeof(arr[0]);

    selection(arr,length);
    
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

static void selection(int arr[],int length){
    for (int i = 0; i < length; i++)
    {
        // find the max item in the remaining array and swap with correct index
        int last=length-i-1;  // because when i=0 then length-1 will give last index and going on i=1 give second last index ...
        int maxIndex=getMaxIndex(arr,0,last);  // getting max index
        swap(arr,maxIndex,last);  // swapping to correct index
    }

    
}
static int getMaxIndex(int arr[],int start,int end){
    int max=start;
    for (int i = start; i <=end ; i++)
    {
        if (arr[max]<arr[i])
        {
            max=i;
        }
        
    }
    return max;
    
}

static void swap(int arr[],int first, int second){
    int temp = arr[first];
    arr[first]=arr[second];
    arr[second]=temp;
}
