class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size(), left = 0, right = n-1;
        while(left<right){
            int sum = numbers[left]+numbers[right];
            if(target == sum){
                return {left+1,right+1};
            }
            else if(target>sum){
                left++;
            }
            else{
                right--;
            }
        }
         
            
        
      return {};
    }
};