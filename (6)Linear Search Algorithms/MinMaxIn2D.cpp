#include <iostream>
using namespace std;

static int findMin(int arr[][3],int rowlength,int collength);
int main()
{
int arr[3][3]={
    {23,4,34},
    {18,55,6},
    {22,3,7}
    };
int rowLength =sizeof(arr)/sizeof(arr[0]);
int colLength =sizeof(arr[0])/sizeof(arr[0][0]);
int ans=findMin(arr,rowLength,colLength);
cout<<"The value find is : "<<ans<<endl;

}
// find the minimum number in the array
static int findMin(int arr[][3],int rowlength,int collength){
    int min=arr[0][0];
    for (int row = 0; row < rowlength; row++){
      for (int col = 0; col < collength; col++)
      {
        if (arr[row][col]<min){
            min=arr[row][col];
        }
      }
      

    }
   return min; // also check for not found
}


// Note: in c++ it is necessary to mention col size in implementing functions 

// Do for dynamic array also ...

