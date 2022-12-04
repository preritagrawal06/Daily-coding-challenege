class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int pos=-1;int l=nums.size();
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target )
                pos=i;
        }
        if(pos>-1)
            return pos;
        else
        {
           if(target<nums[0])
               return 0;
           else if(target>nums[l-1])
               return (l);
           else
           {
               for(int i=0;i<l-1;i++)
               {
                   if(target>nums[i] && target<nums[i+1])
                       pos=i;
               }
               return (pos+1);
           }
        }
    }
};