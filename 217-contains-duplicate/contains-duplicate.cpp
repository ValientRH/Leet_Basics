class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        bool flag ;
        sort(nums.begin(),nums.end());
        for(int i = nums.size()-1; i>0;i--){
            if(nums[i]!=nums[i-1]){
                flag = false;
                
            }
            else{
                flag = true;
                return flag;
            }
        }
        return flag;

    }
};