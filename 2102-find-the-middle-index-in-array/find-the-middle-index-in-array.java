class Solution {
    public int findMiddleIndex(int[] nums) {
        int total = 0;
        for(int i : nums){
            total +=i;
        }
        int left  = 0;
        for(int i =0;i<nums.length;i++){
            int right = total - nums[i] - left;
            if(right == left){
                return i;
            }
            left += nums[i];
        }
        return -1;
    }
}