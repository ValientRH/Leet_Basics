
class Solution {
public:
    bool isValid(std::string s) {
        
        stack<char> stack1;
        
        int i = 0;
        for(char c :s){
            if( c=='(' or c=='{' or c =='[' ){
                stack1.push(c);
            }
            else{
                if(stack1.empty() or 
                (c == ')' && stack1.top() != '(') || 
                    (c == '}' && stack1.top() != '{') ||
                    (c == ']' && stack1.top() != '['))
                    {   return false;   }
                    stack1.pop();
            }
            
        }
        return stack1.empty();

        }
         
};