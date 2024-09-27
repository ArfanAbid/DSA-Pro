// https://www.geeksforgeeks.org/problems/0-1-knapsack-problem0945/1

#include <iostream>
#include <vector>
using namespace std;

// Global memoization table
vector<vector<int>> memo;

// Recursive function with memoization
int knapsackMemo(int idx, int capacity, vector<int> &weights,vector<int> &values) {
    // Base case: no items or no capacity
    if (idx == 0 || capacity == 0)
        return 0;

    // Check if the value is already computed
    if (memo[idx][capacity] != -1)
        return memo[idx][capacity];

    // If the weight of the current item is more than the capacity, skip the item
    if (weights[idx - 1] > capacity) {
        memo[idx][capacity] = knapsackMemo(idx - 1, capacity, weights, values);
    } else {
        // Otherwise, consider both including and excluding the item
        int includeItem =values[idx - 1] +knapsackMemo(idx - 1, capacity - weights[idx - 1], weights, values);
        int excludeItem = knapsackMemo(idx - 1, capacity, weights, values);
        memo[idx][capacity] = max(includeItem, excludeItem);
    }

    return memo[idx][capacity];
}

// Function to solve Knapsack problem using Tabulation
int knapsackTabulation(int n, int capacity, vector<int>& weights, vector<int>& values) {

    vector<vector<int>> dp(n + 1, vector<int>(capacity + 1, 0));

    for (int i = 1; i <= n; i++) {// items
        for (int j = 0; j <= capacity; j++) { // weights
            // If the weight of the current item is more than the current capacity, exclude it
            if (weights[i - 1] > j) {
                dp[i][j] = dp[i - 1][j];
            } else {
                // Otherwise, consider both including and excluding the item
                dp[i][j] = max(dp[i - 1][j], values[i - 1] + dp[i - 1][j - weights[i - 1]]);
            }
        }
    }

    // Return the maximum value in the knapsack for the full set of items and full capacity
    return dp[n][capacity];
}
int main() {
    int n, capacity;
    cout << "Enter number of items: ";
    cin >> n;
    cout << "Enter knapsack capacity: ";
    cin >> capacity;

    vector<int> weights(n), values(n);
    cout << "Enter weights of items:\n";
    for (int i = 0; i < n; i++) {
        cin >> weights[i];
    }
    cout << "Enter values of items:\n";
    for (int i = 0; i < n; i++) {
        cin >> values[i];
    }

    // Initialize memoization table with -1 (uncomputed state)
    memo.resize(n + 1, vector<int>(capacity + 1, -1));

    // Call the recursive knapsack function
    // int max_value = knapsackMemo(n, capacity, weights, values);

    
    int max_value = knapsackTabulation(n, capacity, weights, values);

    cout << "Maximum value in Knapsack (Tabulation): " << max_value << endl;
}