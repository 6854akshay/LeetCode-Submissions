class Solution
{
    public:
        int secondHighest(string s)
        {
            int n, max1 = -1, max2 = -1;
            for (auto i : s)
            {
                if (isdigit(i))
                {
                    n = i - '0';
                    if (n > max1)
                    {
                        max2 = max1;
                        max1 = n;
                    }
                    else if (n < max1 && n > max2)
                        max2 = n;
                }
            }
            return max2;
        }
};