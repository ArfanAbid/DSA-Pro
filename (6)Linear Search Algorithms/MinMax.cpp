#include<iostream>
using namespace std;
static int findMin(int arr[],int length);
int main()
{
int arr[]={23,4,34,5,6,8,44,7,9};
int length =sizeof(arr)/sizeof(arr[0]);
int ans=findMin(arr,length);
cout<<"The minimum value find is : "<<ans<<endl;

}
// find the minimum number in the array
static int findMin(int arr[],int length){
    if(length==0){
        return -1;
    }
    int min=arr[0];
    for (int i = 0; i < length; i++){
      if(arr[i]<min){  // for max -> if(arr[i]>min)
        min=arr[i];
        
      }

    }
return min;//  inside the loop will cause the function to return immediately as soon as it finds a value smaller 
    
}

