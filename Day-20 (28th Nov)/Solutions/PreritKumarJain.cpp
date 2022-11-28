class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int value = 0;
        for(auto v : nums) {
            if(v != val) {
                nums[value]=v;
                value++;
            }
        }
        return value;
    }
};