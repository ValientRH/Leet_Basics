vector<int> insertionSort(vector<int> array){
    int n = array.size();
    for(int i = 1;i<n;i++){
        int key = array[i];
        int j = i-1;
        while(j>=0 && array[j]<key){
            array[j+1] = array[j];
            j--;
        }
        array[j+1] = key;
    }
    return array;
}

class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<int> sorted = insertionSort(score);
        vector<string> answer;
        for(int i = 0;i<score.size();i++){
            for(int j = 0;j<score.size();j++){
                if(score[i]==sorted[j]){
                    switch(j){
                        case 0:
                        answer.push_back("Gold Medal");
                        break;
                        case 1:
                        answer.push_back("Silver Medal");
                        break;
                        case 2:
                        answer.push_back("Bronze Medal");
                        break;
                        default :
                        answer.push_back(to_string(j+1));
                    }
                }
            }
        }
        return answer;
    }
};