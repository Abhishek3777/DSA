class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();
        long long int totalCandies = 0;
        vector<int> score(n, 1);
        // left to right
        for (int i = 1; i < n; i++) {
            if (ratings[i] > ratings[i - 1] && score[i] <= score[i - 1]) {
                score[i] = score[i - 1] + 1;
            }
        }
        /// right to left
        for (int i = n - 2; i >= 0; i--) {
            if (ratings[i] > ratings[i + 1] && score[i] <= score[i + 1]) {
                score[i] = score[i + 1] + 1;
            }
        }
        for (int num : score) {
            totalCandies += num;
        }
        return totalCandies;
    }
};
/// add more greedy problems