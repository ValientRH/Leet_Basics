class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();

        for(int i = 0;i<n;i++){
            int j = n-1-i;

            if(i>=j){
                break;
            }
            else{
                swap(s[i],s[j]);
                
            }
        }
    }
};