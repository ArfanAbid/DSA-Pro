// Find factorial using recursion?

#include<iostream>
using namespace std;
int Fictorial(int n);

int main(){
    int n=0;
    cout<<"Enter the Number You want to get Fictorial : ";
    cin>>n;
    int ans=Fictorial(n);
    cout<<ans;

}


int Fictorial(int n){
    if(n<2){   // Base condition
        return 1;
    }

    return n*Fictorial(n-1);
}



// In your recursive Fictorial function, this condition checks whether n is less than 1. When n is less than 1, it returns 1. This is the termination condition for the recursion. When n reaches 1 or goes below 1, the function will start returning 1, which effectively stops the recursive calls.

//So, the program doesn't move towards -1, -2, and so on because you've set the condition that when n becomes less than 1, it should return 1, preventing further recursion into negative values. This is a common practice in recursive programming to establish a base case that halts the recursion when a certain condition is met.