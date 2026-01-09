class Solution {
    public int[] leftRightDifference(int[] nums) {
        int left = 0 ;
        int right = 0 ;
        for(int i:nums){
            right+=i;
        }
        int[] arr = new int[nums.length];
        for(int i = 0; i<nums.length;i++){
            
            left+=nums[i];
            right-=nums[i];
            arr[i] = Math.abs((left-nums[i])-right);
        }
        return arr;
    }
}