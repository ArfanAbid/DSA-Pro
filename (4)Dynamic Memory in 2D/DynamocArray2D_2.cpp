// How to create D array
// input/output
// Memory free /memory release process

#include<iostream>
using namespace std;
                
int main(){  
        int r,c ;
        cout<<"Enter Row (r) and column(c) : "<<endl;
        cin>>r>>c;
        // creating a 2D array
        int ** arr=new int*[r];
        for (int i = 0; i < r; i++)
        {
            arr[i]=new int[c];
        }

        // taking input
        cout<<"Enter values in 2D array : "<<endl;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cin>>arr[i][j];
            }
            cout<<endl;
        }

        // printing output
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
        

        // releasing Memory
        for (int i = 0; i < r; i++)
        {
            delete []arr[i];
        }

        delete []arr;
    
    }