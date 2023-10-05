class Solution
{
public:
    vector<int> productExceptSelf(vector<int>& nums)
    {
        int n=nums.size();
        vector<int>prev(n);
        int prevMul=1, nextMul=1;
        for(int i=0; i<n; i++)
        {
            prevMul=prevMul*nums[i];
            prev[i]=prevMul;
        }
        for(int i=n-1; i>=0; i--)
        {
            if(i==0) prev[i]=nextMul;
            else if(i==n-1) prev[i]=prev[i-1];
            else prev[i]=prev[i-1]*nextMul;
            nextMul=nextMul*nums[i];
        }
        return prev;
    }
};
