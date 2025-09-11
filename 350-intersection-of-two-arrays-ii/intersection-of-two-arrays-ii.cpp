vector<int> sorting(vector<int>& array){
            int n = array.size();
            if(n<=1){
                return array;
            }
            for(int i = 1;i<n;i++){
                int key = array[i];
                int j = i-1;
                while(j>=0 && array[j]>key){
                    array[j+1] = array[j];
                    j--;
                }
                array[j+1] = key;
            }
            return array;
        }
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;

       

        sorting(nums1);
        sorting(nums2);
        int i = 0,j = 0,n1 = nums1.size(),n2 = nums2.size();
        while(i<n1 && j<n2){
            if(nums1[i] == nums2[j]){
                ans.push_back(nums1[i]);
                i++;
                j++;
            }
            else if (nums1[i] < nums2[j]) {
                i++;
            }
            else {
                j++;
            }
        }
        

        return ans;
    }
};