class Solution
{
    public:
        int minOperations(string s)
        {
            int len = s.size(), i = 0;
            int c0 = 0, c1 = 0;
            string s0 = "";
            string s1 = "";
            while (i < len)
            {
                s0.push_back('0');
                s0.push_back('1');
                i+=2;
                s1.push_back('1');
                s1.push_back('0');
            }
            for (i = 0; i < len; i++)
            {
                if (s[i]!=s0[i])
                    c0++;
                else if (s[i]!=s1[i])
                    c1++;
            }
            return c0 < c1 ? c0 : c1;
        }
};