class Solution {
    public double findMaxAverage(int[] nums, int k) {
         int n = nums.length;
        double sum = 0;
        
        // Step 1: compute sum of first window of size k
        for (int i = 0; i < k; i++) {
            sum += nums[i];
        }
        
        double maxSum = sum;
        
        // Step 2: slide the window
        for (int i = k; i < n; i++) {
            sum += nums[i] - nums[i - k];  // add new element, remove old
            maxSum = Math.max(maxSum, sum);
        }
        
        // Step 3: return max average
        return maxSum / k;
    }
}