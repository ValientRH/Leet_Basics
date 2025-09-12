class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        sort(ransomNote.begin(),ransomNote.end());
        sort(magazine.begin(),magazine.end());
        int i = 0, j = 0, rn = ransomNote.length(), mn = magazine.length();

        bool flag = false;

        while(i<rn && j<mn ){
            if(ransomNote[i]==magazine[j]){
                flag = true;
                i++;
                j++;
            }else{
                flag = false;
                j++;
            }
            
        }

        if(i <rn-1 || mn<rn){
            return false;
        }
        return flag;
    }
};