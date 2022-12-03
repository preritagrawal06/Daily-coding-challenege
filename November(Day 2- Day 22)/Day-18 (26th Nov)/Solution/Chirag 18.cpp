class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> s;
        int i,j,v=nums.size();
        for(j=0;j<v-1;j++)
        {
           for(i=j+1;i<v;i++) 
           {
               if(nums[i]+nums[j]==target)
               {
                   s.push_back(i);
                   s.push_back(j);
                   return s;
               }
           }
        } 
        return s;
    }
};

