        // Concept of Pointers and Functions

#include<iostream>
using namespace std;

void print(int *p){
    cout<< p<<endl;
    cout<< *p<<endl;
}
void update(int *p){
    p=p+1; 
    cout<<"inside : "<<p<<endl; 
    *p=*p+1; // increment in value
}

int getSum(int arr[],int n){  // same as *arr --->>> int getSum(int *arr,int n){
    cout<<"Size : "<<sizeof(arr)<<endl;
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum+=arr[i]; // or i[arr];
    }
    return sum;
    
} 

int main(){  
    int value=5;
    int *p=&value;
    print(p);

    cout<<"Before Update "<<*p<<endl;
    update(p);
    cout<<"After Update "<<*p<<endl;


    int arr[5]={1,2,3,4,5};
    cout<<"Sum is : "<<getSum(arr,5)<<endl;
    cout<<"Sum is : "<<getSum(arr+2,3)<<endl;// Benefit ?  : part of array can be send or pass

    }