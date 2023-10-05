class Solution
{
public:
    int findKthLargest(vector<int>& nums, int k)
    {
        int res;
        if(k<nums.size()/2)
        {
            priority_queue<int>pq;
            for(int i=0; i<nums.size(); i++)
            {
                pq.push(nums[i]);
            }
            while(!pq.empty() && k>0)
            {
                res=pq.top();
                pq.pop();
                k--;
            }
        }
        else
        {
            priority_queue<int, vector<int>, greater<int>>pq;
            for(int i=0; i<nums.size(); i++)
            {
                pq.push(nums[i]);
            }
            k=nums.size()-k+1;
            while(!pq.empty() && k>0)
            {
                res=pq.top();
                pq.pop();
                k--;
            }
        }
        return res;
    }
};
