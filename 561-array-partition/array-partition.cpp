class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;

        for(int i = 1; i<n;i++){
            int key = nums[i];
            int j = i-1;

            while(j>=0 && nums[j]>key){
                nums[j+1]=nums[j];
                j--;
            }
            nums[j+1] = key;
        }

        for(int i = 0; i<n;i+=2){
            sum+=nums[i];
        }
        return sum;
    }
};