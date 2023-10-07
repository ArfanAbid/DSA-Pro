#include<iostream>
using namespace std;
                
int main(){  
        int arr[]={1,22,33,41,45};
        int *p=arr;  // first index of array's address stored in p
        int sum=0;
        for (int i = 0; i < 5; i++)
        {
            sum+=p[i];
        }
        cout<<sum;
        

    }