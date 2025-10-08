class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        
        int n = nums.size();
      
        
        if(n<3){
            return 0;
        }
        // sort(nums.begin(),nums.end());
        for(int i = 1;i<n;i++){
            int key = nums[i];
            int j = i-1;
            while(j>=0&&nums[j]>key){
                nums[j+1]=nums[j];
                j--;
            }
            nums[j+1] = key;
        }
        for(int i = n-1;i>=2;i--){
            if(nums[i]<nums[i-1]+nums[i-2]){
                return nums[i]+nums[i-1]+nums[i-2];
            }
        }
        return 0;
    }
};