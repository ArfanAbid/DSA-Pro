#include<iostream>
using namespace std;
int F(int n);

int main(){
    int ans=F(5);
    cout<<ans;

}
int F(int n){

    if (n<=1){
        return 1;

    }
    return n*F(n-1);
}