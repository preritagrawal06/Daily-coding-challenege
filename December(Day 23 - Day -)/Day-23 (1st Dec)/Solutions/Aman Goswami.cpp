class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0)
            return 0;
        int prev = 0;
        for(int right =1; right< nums.size(); right++){
           if(nums[prev] != nums[right])
               prev++;
               nums[prev] = nums[right];
           }
    return prev+1;
    }
};