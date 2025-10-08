class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l = 0;
        int r = 0;
        int maxLen = 0;

        while (r < nums.size()) {
            // shrink until valid
            if (k == 0 && nums[r] == 0) {
                while (k == 0) {
                    if (nums[l] == 0)
                        k++;
                    l++;
                }
            }
            if (nums[r] == 0 && k > 0)
                k--;

            maxLen = max(maxLen, r - l + 1);
            r++;
        }

        return maxLen;
    }
};