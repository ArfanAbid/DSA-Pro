#include <iostream>
using namespace std;

static int* search(int arr[][3],int rowlength,int collength,int target);
int main()
{
int arr[3][3]={
    {23,4,34},
    {18,55,6},
    {22,3,7}
    };
int rowLength =sizeof(arr)/sizeof(arr[0]);
int colLength =sizeof(arr[0])/sizeof(arr[0][0]);
int target=7;
int* ans=search(arr,rowLength,colLength,target);
cout<<"The value find at index : "<<ans[0]<<","<<ans[1]<<endl;

}
// find the  number in the array
static int* search(int arr[][3],int rowlength,int collength,int target){
    for (int row = 0; row < rowlength; row++){
      for (int col = 0; col < collength; col++)

      
      {
        if (arr[row][col]==target){
            
            int* indice=new int[2]; /*is dynamically allocating memory for an integer array of size 2. It creates a new array on the heap and returns a pointer to the first element of the array. This pointer is then used to store the row and column indices of the target value in the array. */
            indice[0] = row; 
            indice[1] = col;
            return indice;
        }
      }
      

    }
    // also check for not found
}


// Note: in c++ it is necessary to mention col size in implementing functions 

// Do for dynamic array also ...

