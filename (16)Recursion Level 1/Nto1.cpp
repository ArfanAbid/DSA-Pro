#include<iostream>
using namespace std;
void print(int n);
void Reverseprint(int n);
void Bothprint(int n);

int main(){
    // print(5);
    // Reverseprint(5);
    Bothprint(5);
}

void print(int n){
    if(n==0){
        return ;
    }
    cout<<n<<" ";
    print(n-1);
    
}
void Reverseprint(int n){
    if(n==0){
        return ;
    }
    Reverseprint(n-1);
    cout<<n<<" ";
    
}

void Bothprint(int n){
    if(n==0){
        return ;
    }
    cout<<n<<" ";
    Bothprint(n-1);
    cout<<n<<" ";
    
}


// Time and space complexity is O(n)