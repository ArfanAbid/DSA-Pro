// 1143. Longest Common Subsequence

#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Recursive function with memoization Approach
int lcsMemoHelper(string& text1, string& text2, int i, int j, vector<vector<int>>& memo) {
    // Base case: if either string is exhausted, LCS is 0
    if (i== -1 || j == -1) return 0; // this is because our index starts from 0 so base case is i == -1 or j == -1
    
    // Return memoized result if already computed
    if (memo[i][j] != -1) return memo[i][j];
    
    // If the current characters match
    if (text1[i] == text2[j]) {
        memo[i][j] = 1 + lcsMemoHelper(text1, text2, i-1, j-1, memo);
    } 
    // If the current characters don't match
    else {
        memo[i][j] = max(lcsMemoHelper(text1, text2, i-1, j, memo), lcsMemoHelper(text1, text2, i, j-1, memo));
    }
    
    return memo[i][j];
}

int longestCommonSubsequenceMemo(string text1, string text2) {
    int m = text1.size();
    int n = text2.size();
    
    // Initialize memoization table with -1
    vector<vector<int>> memo(m, vector<int>(n, -1));
    
    // Call the helper function starting from the last indices (m-1, n-1) becaue it is zero indexed array
    return lcsMemoHelper(text1, text2, m-1, n-1, memo);
}



// Iterative function with Tabulation Approach
int longestCommonSubsequenceTab(string text1, string text2) {
    int m = text1.size();
    int n = text2.size();
    
    // Create a 2D DP table with dimensions (m+1) x (n+1)
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
    
    // Fill the DP table iteratively (bottom-up)
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (text1[i - 1] == text2[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1; // If characters match
            } else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]); // If characters don't match
            }
        }
    }
    
    // The bottom-right corner contains the result
    return dp[m][n];
}



int main() {
    string text1 = "abcde";
    string text2 = "ace";
    
    cout << "Length of LCS (Memoization): " << longestCommonSubsequenceMemo(text1, text2) << endl;
    cout << "Length of LCS (Tabulation): " << longestCommonSubsequenceTab(text1, text2) << endl;
    
    return 0;
}
