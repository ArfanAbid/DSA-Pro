// Write a program to find transpose of a matrix.

#include<iostream>
using namespace std;
void Transpose(int arr[][3]);

int main(){
    int arr[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}  };

    Transpose(arr);

}

void Transpose(int arr[][3]){
    cout<<"Matrix : "<<endl;
    for (int i=0; i<3; i++){
        for (int  j = 0; j < 3; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        
    }
    cout<<"After Transpose : "<<endl;
    for (int i=0; i<3; i++){
        for (int  j = 0; j < 3; j++)
        {
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
        
    }


}

