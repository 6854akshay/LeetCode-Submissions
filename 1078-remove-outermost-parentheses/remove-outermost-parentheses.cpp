class Solution
{
    public:
        string removeOuterParentheses(string s)
        {
            string ans;
            int opened = 0;
            for (auto i : s)
            {
                if (i == '(')
                {
                    if (opened > 0)
                        ans += i;
                    opened++;
                }
                else
                {
                    opened--;
                    if (opened > 0)
                        ans += i;
                }
            }
            return ans;
        }
};