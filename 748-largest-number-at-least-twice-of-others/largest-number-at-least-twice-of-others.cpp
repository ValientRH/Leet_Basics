int partion(vector<int>& arr, int low, int high){
    int pivot = arr[high];
    int i = low-1;

    for (int j = low; j<=high-1;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[high]);
    return i+1;
}

void quickSort(vector<int>& arr, int low, int high){
    if(low<high){
        int pi = partion(arr,low,high);
        quickSort(arr,low,pi-1);
        quickSort(arr,pi+1,high);
    }
}

class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n = nums.size();
        int ans = -1;
        vector<int> arr = nums;
        quickSort(arr,0,n-1);
        if (arr[n - 1] >= 2 * arr[n - 2]){
            for (int i = 0;i<n;i++){
                if(nums[i] == arr[n-1]){
                    ans = i;
                }
            }
        }
        return ans;
    }
};