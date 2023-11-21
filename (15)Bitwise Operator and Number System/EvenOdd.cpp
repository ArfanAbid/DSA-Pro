#include<iostream>
using namespace std;
bool isOdd(int n);

int main(){

    int n=68;
    cout<<isOdd(n);

}

bool isOdd(int n){
    return(n & 1 == 1);  // Here in Bitwise binary NO is & with 1 so if right most digit is 1 then odd elseif 0 then even
}