class Solution {
public:
    int missingInteger(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto it:nums)
            mp[it]=1;
        int c=nums[0],t=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]!=t+1)break;
            else
            {
                t=nums[i];
                c+=t;
            }
        }
        while(1)
        {
            if(mp.find(c)==mp.end())
                break;
            c++;
        }
        return c;
    }
};
