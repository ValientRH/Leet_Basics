class Solution {
public:
    int minAddToMakeValid(string s) {
        int open = 0, mismatch = 0;
        for (char c:s) {
            if (c == '(')
                open++;
            else {
                if (open > 0)
                    open--;
                else
                    mismatch++;
            }
        }
        return open + mismatch;
    }
};