class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        int l = 0;
        int r = 0;
        int maxLen = 0;
        long long total = 0;
        sort(nums.begin(), nums.end());

        while (r < nums.size()) {
            total += nums[r];

            // shrink
            while ( 1LL * nums[r] * (r - l + 1) > total + k) {
                total -= nums[l];
                l++;
            }
            maxLen = max(maxLen, r - l + 1);
            r++;
        }

        return maxLen;
    }
};