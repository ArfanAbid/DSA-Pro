// LeetCode: 17. Letter Combinations of a Phone Number
// https://leetcode.com/problems/letter-combinations-of-a-phone-number/

#include <iostream>
#include <vector>
using namespace std;


class Solution {
private:
    void solve(string digits, string output, int index, vector<string>& ans, string mapping[]) {
        // Base case:
        if (index >= digits.length()) {
            ans.push_back(output);
            return;
        }
        int number = digits[index] - '0'; // to find a number ASCII 
        string value = mapping[number];

        for (int i = 0; i < value.length(); i++) {
            output.push_back(value[i]);
            solve(digits, output, index + 1, ans, mapping);
            output.pop_back(); // remove character  when coming back from recursion
        }
    }

public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if (digits.length() == 0) {
            return ans;
        }
        string output = "";
        int index = 0;
        string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        solve(digits, output, index, ans, mapping);
        return ans;
    }
};

int main() {
    Solution solution;
    string digits = "23"; // Replace with the desired input digits
    // string digits = "2"; // Replace with the desired input digits
    vector<string> result = solution.letterCombinations(digits);

    // Print the result
    for (const string& s : result) {
        cout << s << " ";
    }
    cout << endl;

    return 0;
}



//   https://www.youtube.com/watch?v=tWnHbSHwNmA&t=49s&ab_channel=CodeHelp-byBabbar