class Solution
{
    public:
        bool checkString(string s)
        {
            int n = s.size(), pos_a = -1, pos_b = n, i;
            for (i = 0; i < n; i++)
            {
                if (s[i] == 'a')
                {
                    pos_a = i;
                    if (pos_b < i)
                        return false;
                }
                else
                    pos_b = i;
            }
            return true;
        }
};