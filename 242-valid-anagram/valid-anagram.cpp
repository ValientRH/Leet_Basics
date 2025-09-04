class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());

        bool flag = true;
        if (s.length()==t.length()){
            for(int i =0; i<s.length();i++){
            if(s[i]!=t[i]){
                flag =false;
            }
        }
        }else{
            flag = false;
        }
        
        return flag; 
    }
};