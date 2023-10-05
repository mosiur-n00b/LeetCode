class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs)
    {
        unordered_map<string,vector<string>>mp;
        for(int i=0; i<strs.size(); i++)
        {
            string tmp=strs[i];
            sort(strs[i].begin(), strs[i].end());
            mp[strs[i]].push_back(tmp);
        }
        vector<vector<string>>vec;
        for(auto it=mp.begin(); it!=mp.end(); it++)
        {
            vec.push_back(it->second);
        }
        return vec;
    }
};
