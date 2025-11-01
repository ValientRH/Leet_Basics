class Solution {
    public List<Integer> findDisappearedNumbers(int[] nums) {
        Set<Integer> count = new HashSet<>();
        
        List<Integer> Res = new ArrayList<>();
        for(int i:nums){
            count.add(i);
        }
        for(int i = 1; i<=nums.length;i++){
            if(!count.contains(i)){
                Res.add(i);
            }
        }
        return Res;
    }
}