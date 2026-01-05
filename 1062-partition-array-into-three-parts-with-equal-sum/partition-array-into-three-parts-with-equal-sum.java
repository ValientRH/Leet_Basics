class Solution {
    public boolean canThreePartsEqualSum(int[] arr) {
        int total = 0;
        for (int i : arr) {
            total += i;
        }

        if (total % 3 != 0) return false;

        int target = total / 3;
        int currSum = 0;
        int count = 0;

        for (int i : arr) {
            currSum += i;
            if (currSum == target) {
                count++;
                currSum = 0;
            }
        }

        return count >= 3;
    }
}
