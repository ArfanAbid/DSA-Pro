#include<iostream>
using namespace std;
int Fibo(int n);

int main(){
    int ans=Fibo(7);
    cout<<"The Fibonacci series of 7 is : "<<ans<<endl;

}

int Fibo(int n){
    // base condition:
    if(n<2){
        return n;
    }
    
    return Fibo(n-1)+Fibo(n-2); // Formulae for N(th) term 
}