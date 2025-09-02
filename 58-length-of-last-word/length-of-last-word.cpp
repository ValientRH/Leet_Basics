class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        stack<char> ch ; 
        for(char i : s){
            ch.push(i);
        }
        for(int i=s.length()-1;i>=0;i--){
            if(ch.top()==' '){
            if(count == 0){
                ch.pop();
            }
            else{
                return count;
                break;
            }
        }
        else{
            ch.pop();
            count++;
        }
        }
        
        return count;
    }
};