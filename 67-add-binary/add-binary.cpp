class Solution {
public:
    string addBinary(string a, string b) {
    string res = "";
    int i = a.size() - 1;
    int j = b.size() - 1;
    int carry = 0;

    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;
        if (i >= 0) sum += a[i--] - '0';  // convert char '0'/'1' to int
        if (j >= 0) sum += b[j--] - '0';
        
        res.push_back((sum % 2) + '0');   // push '0' or '1'
        carry = sum / 2;
    }

    reverse(res.begin(), res.end());  // fix reversed order
    return res;
}

};