/*
Dynamic Programming (DP) is an optimization technique that solves complex problems by breaking them into overlapping subproblems, storing their solutions to avoid redundant calculations and improve efficiency.
2 Approaches to solve DP:
1. Memoization (Top-Down Approach): Store the results of subproblems in an array or a map so that when the same problem is encountered again, you can use the stored value instead of recalculating it.
2. Tabulation (Bottom-Up Approach): Solve the subproblems iteratively and build the solution for the larger problem using previously solved subproblems. 
*/


/*
//1.Memoization(Top Down) 
#include <iostream>
#include <vector>
using namespace std;

int fibonacci(int n, vector<int>& dp) {
    if (n <= 1) return n;  // Base cases
    if (dp[n] != -1) return dp[n];  // Check if already calculated

    // Store the result in dp array and return it
    return dp[n] = fibonacci(n - 1, dp) + fibonacci(n - 2, dp);
}

int main() {
    int n;
    cout << "Enter the number to find Fibonacci: ";
    cin >> n;

    vector<int> dp(n + 1, -1);  // Initialize dp array with -1 (not calculated)
    cout << "Fibonacci of " << n << " is " << fibonacci(n, dp) << endl;

    
}
*/


// Tabulation(Bottom up)
#include <iostream>
#include <vector>
using namespace std;

int fibonacci(int n) {
    if (n <= 1) return n;  // Base cases

    vector<int> dp(n + 1, 0);  // Initialize dp array
    dp[0] = 0;  // F(0)
    dp[1] = 1;  // F(1)

    // Build the solution iteratively
    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    return dp[n];
}

int main() {
    int n;
    cout << "Enter the number to find Fibonacci: ";
    cin >> n;

    cout << "Fibonacci of " << n << " is " << fibonacci(n) << endl;

}


//Both Approaches reduce the time complexity from exponential O(2^n) in the naive recursion to linear O(n).


/*
when to use which DP Approach:

-> Memoization (Top-Down): Recursively solves only necessary subproblems, storing results to avoid recomputation, but adds recursion overhead and stack space. Best for cases where not all subproblems need to be solved.

-> Tabulation (Bottom-Up): Iteratively solves all subproblems without recursion, avoiding stack overflow and function call overhead. Ideal for problems where all subproblems are required.
*/
