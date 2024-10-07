#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int editDistance(string s1, string s2) {
    int m = s1.length();  
    int n = s2.length();  
    
    // Create a table to store the minimum operations for each pair of substrings
    vector<vector<int>> dp(m + 1, vector<int>(n + 1));

    // Fill the first row and column (base cases)
    for (int i = 0; i <= m; i++) {
        dp[i][0] = i;  // If s2 is empty, we need to delete 'i' characters from s1
    }
    for (int j = 0; j <= n; j++) {
        dp[0][j] = j;  // If s1 is empty, we need to insert 'j' characters to form s2
    }

    // Fill the rest of the table
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            // If the characters are the same, no new operation is needed
            if (s1[i - 1] == s2[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1];
            } else {
                // Otherwise, take the minimum of insert, delete, or replace
                dp[i][j] = 1 + min({dp[i - 1][j],   // Delete from s1
                                    dp[i][j - 1],   // Insert into s1
                                    dp[i - 1][j - 1]} // Replace in s1
                                    );
            }
        }
    }

    // The final answer is in the bottom-right corner of the table
    return dp[m][n];
}

int main() {
    string s1 = "replace";
    string s2 = "delete";

    cout << "The Edit Distance is: " << editDistance(s1, s2) << endl;

    
}
