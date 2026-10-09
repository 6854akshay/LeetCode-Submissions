class Solution
{
    public:
        int minInsertions(string s)
        {
            int count = 0, open = 0, i;
            for (i = 0; i < s.size(); i++)
            {
                if (s[i] == '(')
                    open++;
                else
                {
                    if (i + 1 < s.size() && s[i + 1] == ')')
                        i++;
                    else
                        count++;
                    if (open > 0)
                        open--;
                    else
                        count++;
                }
            }
            return count + open*2;
        }
};