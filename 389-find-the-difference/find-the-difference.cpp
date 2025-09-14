class Solution {
public:
    char findTheDifference(string s, string t) {
       char st = 0;
       for(char a : s){ st ^= a; }
       for(char a : t){ st ^= a; }
       return st;
    }
};