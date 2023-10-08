#include<iostream>
using namespace std;
void pattern1(int r,int c);
void pattern2(int r,int c);
int main(){  
    pattern1(5,0);     
    // pattern2(5,0);     
    }

void pattern1(int r,int c){
    if(r==0){
        return;
    
    }
    if(c<r){
        pattern1(r,c+1);
        cout<<"*";
    }else{
        pattern1(r-1,0);
        cout<<endl;  // breakes line
    }
}   

void pattern2(int r,int c){
    if(r==0){
        return;
    
    }
    if(c<r){
        cout<<"*";
        pattern2(r,c+1);
    }else{
        cout<<endl;  // break line
        pattern2(r-1,0);
    }
}   