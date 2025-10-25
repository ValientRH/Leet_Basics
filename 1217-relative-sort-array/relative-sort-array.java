class Solution {
    public int[] relativeSortArray(int[] arr1, int[] arr2) {
        int a1 = arr1.length;
        int a2 = arr2.length;
        
        int[] res = new int[a1];
        int idx = 0;

        for (int i = 0; i < arr2.length; i++) {
            // Traverse through the target array
            for (int j = 0; j < arr1.length; j++) {
                // If element in target array matches with relative order element
                if (arr1[j] == arr2[i]) {
                    // Add it to the result array
                     res[idx++] = arr1[j];
                    // Mark the element in target array as visited
                    arr1[j] = -1;
                }
            }
        }
        Arrays.sort(arr1);
        // Add the remaining elements to the result array
        for (int i = 0; i < arr1.length; i++) {
            if (arr1[i] != -1) {
               res[idx++] = arr1[i];
            }
        }
        return res;
    }
}