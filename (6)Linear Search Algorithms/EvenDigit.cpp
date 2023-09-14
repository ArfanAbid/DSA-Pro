// LeetCode : 1295. Find Numbers with Even Number of Digit
// https://leetcode.com/problems/find-numbers-with-even-number-of-digits/

// 1. count the number of digits  OR
// 2. convert  the number  to string

# include<iostream>
using namespace std;

static int findNumber(int nums[], int size);
static bool even(int num);
static int digit(int num);


int main(){
int nums[] = {12,345,2,6,7896}; 
int numsSize = sizeof(nums) / sizeof(nums[0]);

cout<<findNumber(nums,numsSize);
}

static int findNumber(int nums[],int numsSize){
    int count=0;
    for (int num = 0; num< numsSize; num++)
    {
      if(even(nums[num])){
        count++;
      }
    }
    return count;
    
}
//function to check if a number contains even numbers  or not
static bool even (int num){
    int numberOfDigits = digit(num);
    // if (numberOfDigits%2 == 0) return true; OR
    return numberOfDigits%2 == 0;
}


// count the number of digits in a number
static int digit(int num){
  int count = 0;
    while(num>0){
        count++;
        num=num/10;

    }
    return count;
}