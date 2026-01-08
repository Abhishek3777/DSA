class Solution {
    int solve(vector<int>& prices, int index, bool buySell,
              vector<vector<int>>& dp) {
        // base case
        if (index >= prices.size())
            return 0;

        // memo
        if (dp[index][buySell] != -1)
            return dp[index][buySell];

        int maxProfit = 0;
        // if buy -> 1
        if (buySell) {
            maxProfit = max(-prices[index] + solve(prices, index + 1, 0,dp),
                            0 + solve(prices, index + 1, 1,dp));
        } else {
            maxProfit = max(prices[index] + solve(prices, index + 1, 1,dp),
                            0 + solve(prices, index + 1, 0,dp));
        }
        return dp[index][buySell] = maxProfit;
    }

public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<vector<int>> dp(n + 1, vector<int>(2, -1));
        return solve(prices, 0, 1, dp);
    }
};