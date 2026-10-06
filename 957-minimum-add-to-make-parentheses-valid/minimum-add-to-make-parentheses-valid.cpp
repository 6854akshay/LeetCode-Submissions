class Solution
{
    public:
        int minAddToMakeValid(string s)
        {
            int bal = 0, count = 0, i;
            for (i = 0; i < s.size(); i++)
            {
                if (s[i] == '(')
                    bal++;
                else if (s[i] == ')')
                {
                    if (bal > 0)
                        bal--;
                    else
                        count++;
                }
            }
            return bal + count;
        }
};