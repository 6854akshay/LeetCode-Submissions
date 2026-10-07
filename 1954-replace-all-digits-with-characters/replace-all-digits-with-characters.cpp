class Solution
{
    public:
        char shift(char c, char x)
        {
            return c + (x - '0');
        }
        string replaceDigits(string s)
        {
            if (s.size() == 1)
                return s;
            int i = 0, j = 1;
            while (j<s.size())
            {
                s[j] = shift(s[i], s[j]);
                i+=2;
                j+=2;
            }
            return s;
        }
};