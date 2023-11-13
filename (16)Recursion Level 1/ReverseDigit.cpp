// Program to reverse Digits and check palidrom 

#include<iostream>
#include <math.h>
using namespace std;


static int sum=0;
static int helper(int n ,int digits);
static void rev1(int n);
static int  rev2(int n);
static bool palidrom(int n);


int main(){
    // rev1(1234);
    // cout<<sum;
    // cout<<rev2(1234);
    cout<<palidrom(121);

}
// ------------------------1 Method  ----------------------------------------

static void rev1(int n){
    if(n==0){
        return;
    } 
    int rem =n%10;
    sum =sum *10 + rem;
    rev1(n/10);
}
// ------------------------2 Method ----------------------------------------

static int rev2(int n){
// sometime you might need some additional variables in the arguments
// In that case, make another function 

int digits = (int)(log10(n)) + 1;
return helper(n,digits);

}
static int helper(int n ,int digits){
    if(n%10==n){
        return n;
    }
    int rem =n%10;
    return rem * pow(10,digits-1)+ helper(n/10,digits-1);


}

static bool palidrom(int n){
int reversed = rev2(n);
    return n == reversed;
    }




