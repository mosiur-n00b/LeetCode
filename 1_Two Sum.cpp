class Solution
{
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        vector<int>v;
        map<int,int>mp;
        int len=nums.size();
        for(int i=0; i<len; i++)
        {
            if(mp.find(target-nums[i])==mp.end())
            {
                mp[nums[i]]=i;
            }
            else
            {
                v.push_back(i);
                v.push_back(mp[target-nums[i]]);
            }
        }
        return v;
    }
};
