class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max = 0;
        int buy = prices[0];
        int n = prices.size();
        for(int i = 1; i<n;i++ ){
            if(buy>prices[i]){
                buy = prices[i];
            } 
            int k = prices[i]-buy;
            if(max<k){
                max = k;
            }
        }
        return max;
    }
};