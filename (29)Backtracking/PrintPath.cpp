// Print All Unique Paths in a Grid

#include<iostream>
using namespace std;

void printPath(int r,int c ,string path){
    if(r==1 && c==1){
        cout<<path<<endl;
        return;
    }
    // Move down if possible
    if(r>1){
        printPath(r-1, c, path + "D");
    }
        // Move right if possible
    if (c > 1) {
        printPath(r, c - 1, path + "R");
    }

}

int main(){
    printPath(3,3,"");
}