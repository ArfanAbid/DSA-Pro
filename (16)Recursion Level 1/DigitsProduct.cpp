#include<iostream>
using namespace std;
int Prod(int n);

int main(){
    int ans=Prod(1342);
    cout<<ans;

}
int Prod(int n){

    if (n%10==n){
        return n; // if one gigit is remaining return that instead of returning zero as in case sum ,so in prod it will make all term 0

    }
    return (n%10)*Prod(n/10);
}