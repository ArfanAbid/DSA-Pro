// Backtracking is an algorithmic technique whose goal is to use brute force to find all solutions to a problem. It entails gradually compiling a set of all possible solutions. Because a problem will have constraints, solutions that do not meet them will be removed
/*
Count the Number of Unique Paths in a Grid 
You are given a grid with r rows and c columns. Starting from the top-left corner of the grid, you can only move down or right at each step. Write a function to calculate the total number of unique paths to reach the bottom-right corner of the grid.
*/

#include<iostream>
using namespace std;

int count(int r,int c){
    if(r==1 || c==1){
        return 1;
    }
    int left=count(r-1,c);
    int right=count(r,c-1);
    
    return left+right;
}

int main(){
    cout << count(3,3);
}