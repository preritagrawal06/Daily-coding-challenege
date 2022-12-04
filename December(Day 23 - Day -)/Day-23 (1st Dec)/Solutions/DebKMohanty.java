class Solution {
    public int removeDuplicates(int[] nums) {
        if(nums.length==0){
            return 0;
        }
        int c = 0;
        for(int i=1;i<nums.length;i++){
            if(nums[c] != nums[i]){
                c++;
                nums[c] = nums[i];
            }
        }
        return c+1;
    }
}