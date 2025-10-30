class Solution {
    public int[] arrayRankTransform(int[] arr) {
        int n = arr.length;
        int[] res = new int[n];
        
        // Step 1: Copy and sort
        int[] sorted = Arrays.copyOf(arr, n);
        Arrays.sort(sorted);
        
        // Step 2: Map each unique number to its rank
        Map<Integer, Integer> rankMap = new HashMap<>();
        int rank = 1;
        for (int num : sorted) {
            if (!rankMap.containsKey(num)) {
                rankMap.put(num, rank);
                rank++;
            }
        }
        
        // Step 3: Build result using the rank map
        for (int i = 0; i < n; i++) {
            res[i] = rankMap.get(arr[i]);
        }
        
        return res;
    }
}