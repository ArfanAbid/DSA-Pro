// program to calculate no of zeros in the number

#include<iostream>
using namespace std;

int count(int n);
int helper(int n,int c);

int main(){

    int ans=count(30204);
    cout<<ans;
}

int count(int n){

    return helper(n,0);
}

// special pattern , how to pass value to above call

int helper(int n,int c){
    if(n==0) {  // base condition 
        return c;
    }
    int rem=n%10;
    if(rem==0){
        return helper(n/10,++c); // also c+1 but not c++ 
    }
    return helper(n/10,c);


}