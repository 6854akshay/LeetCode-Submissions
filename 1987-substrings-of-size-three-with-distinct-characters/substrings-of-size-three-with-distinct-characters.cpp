class Solution
{
    public:
    int countGoodSubstrings(string s)
    {
        int count = 0;
        if (s.size() < 3)
            return 0;
        else
        {
            int i = 0, j = 1, k = 2;
            while (k <= s.size() - 1)
            {
                if (s[i] != s[j] && s[j] != s[k] && s[i] != s[k])
                    count++;
                i++;
                j++;
                k++;
            }
        }
        return count;  
    }
};