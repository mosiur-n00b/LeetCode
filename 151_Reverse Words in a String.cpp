class Solution
{
public:
    string reverseWords(string s)
    {
        string rs="";
        stack<string>stk;
        string w="";
        for(int i=0; i<s.size(); i++)
        {
            if(s[i] == ' ')
            {
                if(w.size()>0) stk.push(w);
                w="";
            }
            else
            {
                w+=s[i];
            }
        }
        if(w.size()>0) stk.push(w);
        while(!stk.empty())
        {
            string w2=stk.top();
            stk.pop();
            rs+=w2;
            if(!stk.empty()) rs+=" ";
        }
        return rs;
    }
};
