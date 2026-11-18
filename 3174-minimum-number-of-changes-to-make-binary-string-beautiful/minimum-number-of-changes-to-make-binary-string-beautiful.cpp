class Solution
{
    public:
        int minChanges(string s)
        {
            int i, n = s.size(), count = 0;
            for (i = 0; i < n - 1; i+=2)
            {
                if (s[i] != s[i + 1])
                    count++;  
            }
            return count;
        }
};