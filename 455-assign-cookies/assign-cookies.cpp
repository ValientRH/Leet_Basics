vector<int> insertionSort(vector<int> array) {
    int n = array.size();
    for (int i = 1; i < n; i++) {
        int key = array[i];
        int j = i - 1;
        while (j >= 0 && array[j] > key) {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = key;
    }
    return array;
}

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        g = insertionSort(g);
        s = insertionSort(s);
        int i = 0, j = 0, count = 0;

        while (i < g.size() && j < s.size()) {
            if (s[j] >= g[i]) {  
                // Cookie j can satisfy child i
                count++;
                i++;
                j++;
            } else {
                // Cookie too small, try next cookie
                j++;
            }
        }
        return count;
    }
};
