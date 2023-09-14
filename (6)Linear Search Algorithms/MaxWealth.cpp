// LeetCode:1672. Richest Customer Wealth
//https://leetcode.com/problems/richest-customer-wealth/

#include<iostream>
using namespace std;

static int MaxWealth(int Account[][3],int rows,int cols);

int main(){

int Account[3][3]={
    {1,2,3},
    {3,2,3}
};
int row=sizeof(Account)/sizeof(Account[0]);
int col=sizeof(Account[0])/sizeof(Account[0][0]);
int ans = MaxWealth(Account,row,col );
cout<<ans<<endl;


}

static int MaxWealth(int Account[][3],int rows,int cols){
    int ans=0;//should initiaize to INT_MIN
    for (int  person = 0; person < rows; person++)     
    {
        // when u start a new row take a new sum 
        int sum=0;
        for (int account = 0; account < cols; account++)  
        {
            sum += Account[person][account];
        }
        // now we have sum of accounts of person .check with overall ans
        if (sum >ans){
            ans = sum;
        }
        
    }
    return ans;
    
}