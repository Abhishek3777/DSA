class Solution {
private:
    int solve(int index, vector<int>& nums, vector<int>& dp) {
        /// base case
        if (index == nums.size() - 1)
            return true;

        if (dp[index] != -1)
            return dp[index];

        for (int i = index + 1; i <= index + nums[index]; i++) {
            if (i < nums.size()) {
                if (solve(i, nums, dp))
                    return dp[index] =  true;
            }
        }
        return dp[index] = false;
        
    }

public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n + 1, -1);
        return solve(0, nums,dp);
    }
};