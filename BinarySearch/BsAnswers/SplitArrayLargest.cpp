class Solution {
private:
    bool possible(vector<int>& nums, int maxi, int k) {
        int sum = 0;
        int count = 1;
        for (int i = 0; i < nums.size(); i++) {
            if (sum + nums[i] <= maxi) {
                sum += nums[i];
            } else {
                count++;
                sum = nums[i];
            }
            if (count > k)
                return false;
        }
        return true;
    }

public:
    int splitArray(vector<int>& nums, int k) {

        int maxi = *max_element(nums.begin(), nums.end());
        int summation = accumulate(nums.begin(), nums.end(), 0);
        // binary search
        int low = maxi;
        int high = summation;
        int ans = 0;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (possible(nums, mid, k)) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return ans;
    }
};