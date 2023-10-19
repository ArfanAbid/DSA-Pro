// Reverse a string using recursion?

#include<iostream>
using namespace std;
void ReverseString(string &str,int start,int end);


int main(){
    string str;
    cout<<"Enter the String you want to reverse : ";
    cin>>str;
    ReverseString(str,0,str.length()-1);
    cout<<"\nThe Reverse String is : ";
    cout<<str;

}

void ReverseString(string &str,int start,int end){
    if(start>=end){ // Base Condition
        return;
    }
    std::swap(str[start],str[end]); // Builtin Swap Function in C++
    ReverseString(str,start+1,end-1);
}