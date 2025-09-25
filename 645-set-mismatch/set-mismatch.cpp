class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        unordered_map <int,int> count;
        for (auto num : nums) {
    count[num]++;
}

        vector<int> ans(2,-1);
        int exp_sum  = (n*(n+1))/2;
        int sum = 0;
        for (int i = 1; i <= n; i++) {
            if (count[i] == 2) ans[0]=i; // duplicate
            else if (count[i] == 0) ans[1]=i; // missing
        }
        
        return ans;
    }
};