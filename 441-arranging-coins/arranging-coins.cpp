class Solution
{
    public:
        int arrangeCoins(int n)
        {
            long long l = 1, h = n, m, coins;
            int ans = 0;
            while (l <= h)
            {
                m = l + (h - l)/2;
                coins = m*(m + 1)/2;
                if (coins > n)
                    h = m - 1;
                else
                {
                    ans = m;
                    l = m + 1;
                }
            }
            return ans;
        }
};