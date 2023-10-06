#include<iostream>
using namespace std;

void ByValue(int n){
    n++;
}
void ByReference(int &n){
    n++;
}
                
int main(){  
        int i=10;
        int &j=i; // creating reference variable

        cout<<"Value of i is : "<<i<<endl;
        cout<<"Value of j is : "<<j<<endl;
        j++; // or i++;
        cout<<"Value of i after increment is : "<<i<<endl;
        cout<<"Value of j after increment is : "<<j<<endl;

        int n=10;
        cout<<"Before pass by Value : "<<n<<endl;
        ByValue(n); // copy of value is passed
        cout<<"After pass by Value : "<<n<<endl;

        int m=5;
        cout<<"Before pass by Reference : "<<m<<endl;
        ByReference(m); // orignal value is passed i.e memory
        cout<<"After pass by Reference : "<<m<<endl;


        


    }