class Solution {
public:
    int binary(vector<int>& nums,int target){
        int l = 0;
        int r =nums.size()-1;

        while(l<=r){
            int mid = (l+r)/2;
            if (nums[mid]==target){
                return mid;
            }
            else if(target<nums[mid]){
                r = mid -1;
            }
            else{
                l = mid+1;
            }
        }
        return -1;
    }
    int searchInsert(vector<int>& nums, int target) {
        int index = binary(nums,target);
        if(index != -1){
            return index;
        }
        for(int  i= 0; i<nums.size();i++){
            if(target<nums[i]){
                return i;
            }
        }
        return nums.size();
    }
};