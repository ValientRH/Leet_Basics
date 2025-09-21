class Solution {
public:
    int findLHS(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int i = 0, j = 0;
        int result = 0;
        int n = nums.size();

        while (j < n) {
            // shrink left side until diff <= 1
            while (nums[j] - nums[i] > 1) {
                i++;
            }
            // valid subsequence when diff == 1
            if (nums[j] - nums[i] == 1) {
                result = max(result, j - i + 1);
            }
            j++;
        }

        return result;
    }
};
