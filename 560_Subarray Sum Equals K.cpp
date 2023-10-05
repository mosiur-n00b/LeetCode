class Solution
{
public:
    int subarraySum(vector<int>& nums, int k)
    {
        unordered_map<int,int>mp;
        int currSum=0, cnt=0;
        for(int i=0; i<nums.size(); i++)
        {
            currSum+=nums[i];
            if(currSum==k) cnt++;
            if(mp.find(currSum-k) != mp.end())
            {
                cnt+=mp[currSum-k];
            }
            mp[currSum]++;
        }
        return cnt;
    }
};
