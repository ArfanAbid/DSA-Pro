#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> output;
        int index = 0;
        solve(nums, output, index, ans);
        return ans;
    }

private:
    void solve(vector<int> nums, vector<int> output, int index, vector<vector<int>> &ans) {
        // Base case
        if (index >= nums.size()) {
            ans.push_back(output);
            return;
        }
        // Exclude
        solve(nums, output, index + 1, ans);
    
        // Include
        int element = nums[index];
        output.push_back(element);
        solve(nums, output, index + 1, ans);
    }
};

int main() {
    Solution solution;
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> subsets = solution.subsets(nums);

    // Print the subsets
    for (const vector<int>& subset : subsets) {
        for (int num : subset) {
            cout << num << " ";
        }
        cout<<endl;
    }

    return 0;
}
