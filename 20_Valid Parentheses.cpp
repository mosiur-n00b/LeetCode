class Solution
{
public:
    bool isValid(string s)
    {
        stack<char>stk;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i] == '(' || s[i] == '{' || s[i] == '[')
            {
                stk.push(s[i]);
            }
            else
            {
                if(!stk.empty())
                {
                    char c=stk.top();
                    if(s[i] == ')' && c=='(')
                    {
                        stk.pop();
                    }
                    else if(s[i] == '}' && c=='{')
                    {
                        stk.pop();
                    }
                    else if(s[i] == ']' && c=='[')
                    {
                        stk.pop();
                    }
                    else return false;
                }
                else return false;
            }
        }
        if(stk.empty()) return true;
        else return false;
    }
};
