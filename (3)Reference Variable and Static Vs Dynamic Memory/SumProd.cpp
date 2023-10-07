// Find sum and prod using dynamic memory 

#include<iostream>
using namespace std;
                
int main(){  
        int n,sum=0,prod=1;
        cout<<"Enter the number of input u want to sum : ";
        cin>>n;
       int *p=new int[n];
        cout<<"Enter elements in array : "<<endl;
        for (int i = 0; i < n; i++)
        {
        cin>>p[i];
        }
        for (int i = 0; i < n; i++)
        {
            sum=sum+p[i];
            prod=prod*p[i];
        }
        cout<<"Sum of array is : "<<sum<<endl;
        cout<<"Prod of array is : "<<prod<<endl;

        delete[] p; // clear memory
    }