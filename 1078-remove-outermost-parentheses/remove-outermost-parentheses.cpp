class Solution
{
    public:
        string removeOuterParentheses(string s)
        {
            vector<string> valid;
            stack<char>pt;
            string p = "";
            for (auto i : s)
            {
                if (i == '(')
                {
                    pt.push(i);
                    p.push_back(i);
                }
                else
                {
                    p.push_back(i);
                    if (pt.size() == 1)
                    {
                        valid.push_back(p);
                        p = "";
                    }
                    pt.pop();
                }
            }
            string ans = "";
            for (auto i : valid)
                ans = ans + i.substr(1, i.size()-2);
            return ans;
        }
};