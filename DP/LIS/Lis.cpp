class Solution {
private:
    int solve(vector<int>& nums, int currIndex, int prevIndex,
              vector<vector<int>>& dp) {
        // base case

        if (currIndex >= nums.size()) {
            return 0;
        }
        // memo
        if (dp[currIndex][prevIndex + 1] != -1) {
            return dp[currIndex][prevIndex + 1];
        }
        // include
        int take = 0;
        if (prevIndex == -1 || nums[currIndex] > nums[prevIndex])
            take = 1 + solve(nums, currIndex + 1, currIndex, dp);

        // exclude
        int notTake = 0 + solve(nums, currIndex + 1, prevIndex, dp);

        return dp[currIndex][prevIndex + 1] = max(take, notTake);
    }
    int solveOptimal(vector<int>& nums) {

        if (nums.size() == 0)
            return 0;

        vector<int> ans;
        ans.push_back(nums[0]);

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > ans.back()) {
                ans.push_back(nums[i]);
            } else {
                int index =
                    lower_bound(ans.begin(), ans.end(), nums[i]) - ans.begin();
                ans[index] = nums[i];
            }
        }
        return ans.size();
    }

public:
    int lengthOfLIS(vector<int>& nums) {
        // int n = nums.size();
        // vector<vector<int>> dp(n, vector<int>(n, -1));
        // return solve(nums, 0, -1, dp);
        return solveOptimal(nums);
    }
};