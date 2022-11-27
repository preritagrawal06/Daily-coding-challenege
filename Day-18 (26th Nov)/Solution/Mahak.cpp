class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> a;
        int i, j;
        for(i=0; i < nums.size(); i++){
            for(j=i+1; j < nums.size(); j++){
                if(nums[i]+nums[j]==target){
                    a.push_back(i);
                    a.push_back(j);
                }
            }
        }
        return a;
    }
};