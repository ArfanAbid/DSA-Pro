// Find Fibonacci series using recursion?

#include<iostream>
using namespace std;;
int Fibo(int n);
int main(){
    int n=0;
    cout<<"Enter the Number You want to get Fibonacci Series : ";
    cin>>n;
    int ans=Fibo(n);
    cout<<ans;

}

int Fibo(int n){
    if(n<2){  // Base condition
        return n;
    }
    return Fibo(n-1)+Fibo(n-2); 
}
