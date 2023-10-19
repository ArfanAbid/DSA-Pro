#include<iostream>
using namespace std;
int GCD(int a,int b);

int main(){
    int a=0,b=0;
    cout<<"Enter Number 1 : ";
    cin>>a;
    cout<<"\nEnter Number 2 : ";
    cin>>b;
    int ans=GCD(a,b);
    
    cout << "GCD of " << a << " and " << b << " is " << ans << endl;
}

int GCD(int a,int b){
    if(b==0){
    return a;
    }

    return GCD(b,a%b);
}