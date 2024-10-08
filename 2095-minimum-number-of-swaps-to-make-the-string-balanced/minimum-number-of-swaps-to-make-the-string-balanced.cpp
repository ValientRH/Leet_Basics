class Solution {
public:
    int minSwaps(string s) {
        int size = 0;
        int n =s.size();
        for (int i =0 ; i<n; i++){
            char k = s[i];
            if(k == '['){
                size++;             
            }
            else if(size>0){
                size--;
            }
        }
        return (size+1)/2;
    }
};      