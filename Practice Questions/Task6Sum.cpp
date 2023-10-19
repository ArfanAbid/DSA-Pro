// Find sum of natural numbers using recursion?

#include<iostream>
using namespace std;;
int Sum(int n);
int main(){
    int n=0;
    cout<<"Enter the Natural Number upto Which You want to get Sum  : ";
    cin>>n;
    int ans=Sum(n);
    cout<<ans;

}

int Sum(int n){
    if(n==1){  // Base condition
        return 1;
    }
    return Sum(n-1)+n ;
}
