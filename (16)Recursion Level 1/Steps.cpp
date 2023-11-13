// LeetCode: 1342. Number of steps to Reduce a number to Zero
// https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/

#include<iostream>
using namespace std;
int numberOfSteps(int num);
int helper(int num,int steps);

int main(){
 int ans =numberOfSteps(14);
 cout<<ans;

}


int numberOfSteps(int num) {
        return helper(num,0);
    }

int helper(int num,int steps){

    if (num==0){
        return steps;
    }
    if(num%2==0){
        return helper (num/2,steps+1);
    }
    return helper(num-1,steps+1);
    }