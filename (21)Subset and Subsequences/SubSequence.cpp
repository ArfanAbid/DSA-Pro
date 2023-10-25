#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<string> subsequence(string str) {
        vector<string> ans;
        string output = "";
        int index = 0;
        solve(str, output, index, ans);
        return ans;
    }

private: 
    void solve(string str, string output, int index, vector<string>& ans) {
        // base case
        if (index >= str.length()) {
            ans.push_back(output);
            return;
        }
        // Exclude
        solve(str, output, index + 1, ans);
    
        // Include
        char element = str[index];
        output.push_back(element);
        solve(str, output, index + 1, ans);
    }
};

int main() {
    Solution solution;
    string input = "abc";
    vector<string> subsequences = solution.subsequence(input);

    // Print the generated subsequences
    for (const string& subsequence : subsequences) {
        cout << subsequence << endl;
    }

    return 0;
}
