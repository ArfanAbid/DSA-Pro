                // Concept of Recrsion 
#include<iostream>
using namespace std;
int Func(int n);

int main(){
    int ans=Func(5);

}
int Func(int n){

    if (n==0){
        return 0;

    }
    cout<<n<<endl;
    // return Func(n--);
    // n-- VS --n       > Use Value first then subtract from it     VS    Subtract first then then use value
    return Func(--n);
}