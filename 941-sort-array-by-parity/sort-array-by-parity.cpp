class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n = nums.size();
        if(n>0){

        //      for(int i = 1;i<n;i++){
        //     int key = nums[i];
        //     int j = i-1;
        //     while(j>=0 && nums[j]>key){
        //         nums[j+1] = nums[j];
        //         j--;
        //     }
        //     nums[j+1] = key;
        // }

stack<int> st;
       for(int i : nums){
        st.push(i);
       }

       int i = 0, j= n-1;

       while(!st.empty()){
        if(st.top()%2 == 0){
            nums[i]=st.top();
            st.pop();
            i++;
        }
        else{
            nums[j] = st.top();
            st.pop();
            j--;
        }
       }

        }
       return nums;




    }
};