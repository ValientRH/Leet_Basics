int partion(vector<int>& arr,int low , int high){
    int pivot = arr[high];
    int i = low-1;
    for(int j = low;j<high;j++ ){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[high]);
    return i+1 ;
}
void quick(vector<int>& arr,int low , int high){
    if(low<high){
        int pi = partion(arr,low,high);

        quick(arr,low,pi-1);
        quick(arr,pi+1,high);
    }
}

class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        
        int n = nums.size();
      
        
        if(n<3){
            return 0;
        }
        // sort(nums.begin(),nums.end());
        // for(int i = 1;i<n;i++){
        //     int key = nums[i];
        //     int j = i-1;
        //     while(j>=0&&nums[j]>key){
        //         nums[j+1]=nums[j];
        //         j--;
        //     }
        //     nums[j+1] = key;
        // }
        quick(nums,0,n-1);
        for(int i = n-1;i>=2;i--){
            if(nums[i]<nums[i-1]+nums[i-2]){
                return nums[i]+nums[i-1]+nums[i-2];
            }
        }
        return 0;
    }
};