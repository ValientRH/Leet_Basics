class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        stack <int> st;
        int n = nums.size(), i = 0,j = n-1;
        for(int i:nums){
            st.push(i);
        }
        while(!st.empty()){
            if(st.top()%2==0){
                nums[i] = st.top();
                i+=2;
            }else{
                nums[j] = st.top();
                j-=2;
            }
            st.pop();
        }
        return nums;
    }
};