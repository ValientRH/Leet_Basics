class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> stack;
         for (char c:s){
            !stack.empty() and stack.top()==c ? stack.pop():stack.push(c);
         }
         string res;
         while(!stack.empty()){
            res.push_back(stack.top());
            stack.pop();
         }
         reverse(res.begin(),res.end());
         return res;
    }
};