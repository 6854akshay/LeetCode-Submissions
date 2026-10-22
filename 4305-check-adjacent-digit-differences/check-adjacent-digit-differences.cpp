class Solution
{
    public:
        bool isAdjacentDiffAtMostTwo(string s)
        {
            int n = s.size(), i;
            for (i = 0; i < n - 1; i++)
            {
                if (abs(s[i] - s[i + 1]) > 2)
                    return false;
            }
            return true;
        }
};