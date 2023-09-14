#include<iostream>
using namespace std;

static void bubble(int arr[],int length);

int main(){
int arr[]={2,5,3,1,4};
// int arr[]={1,2,3,4,5};
int length=sizeof(arr)/sizeof(arr[0]);
bubble(arr,length);

// printing like an array
cout<<"[";
for (int i = 0; i < length; i++)
{
    cout<<arr[i];
    if(i<length-1){
        cout<<",";
    }
}
cout<<"]";


}

static void bubble(int arr[],int length){
    bool swapped;
    //run the steps n-1 times
    for(int i=0;i<length;i++){
        swapped = false;
      // for each step, item will come at the last respective index
    //   for (int j = 0; j <= length-i-1; j++)   OR
      for (int j = 1; j < length-i; j++)
      {
        //swap if item is smaller than previous item
        if(arr[j]<arr[j-1]){
            //swap
            int temp=arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
            swapped=true;

        }
      }
      
        // if did not swap for particular value of i, it means the array is sorted hence stop the program
        if (!swapped) // !false=true 
        {
            break;
        }
        

    }
}

