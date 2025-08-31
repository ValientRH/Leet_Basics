class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n  = strs.size();
        sort(strs.begin(),strs.end());
        string res ="";
        string first  = strs[0];
        string last = strs[n-1];

        for(int i = 0 ; i<min(first.length(),last.length());i++){
            if(first[i]!= last[i]){
                return res;
            }
            else{
                res += first[i];
            }
        }

        return res;
   
    }
};