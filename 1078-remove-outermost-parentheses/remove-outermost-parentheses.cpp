class Solution
{
    public:
        string removeOuterParentheses(string s)
        {
            string ans;
            ans.reserve(s.size());
            int opened = 0;
            for (auto i : s)
            {
                if (i == '(')
                {
                    if (opened > 0)
                        ans = ans + i;
                    opened++;
                }
                else
                {
                    opened--;
                    if (opened > 0)
                        ans = ans + i;
                }
            }
            return ans;
        }
};