// wrte a function that takes in a number and print it (print 1-5)

#include<iostream>
using namespace std;
// void print1(int n);
// void print2(int n);
// void print3(int n);
// void print4(int n);
// void print5(int n);
void print(int n);

int main(){
    // print1(1);
    print(1);
}
void print(int n){
    cout<<n<<endl;
    if(n==5){
        return;
    }
    // Recursive Call:
            // if u are  calling a function again and again , you can treat it as a separate call in a stack

    // this is called  tail recursion,this is last function call
    print(n+1);
}

// instead of this 

// void print1( int n){
//     cout<<n<<endl;
//     print2(2);
// }

// void print2( int n){
//     cout<<n<<endl;
//     print3(3);
// }

// void print3( int n){
//     cout<<n<<endl;
//     print4(4);
// }

// void print4( int n){
//     cout<<n<<endl;
//     print5(5);
// }

// void print5( int n){
//     cout<<n<<endl;

// }