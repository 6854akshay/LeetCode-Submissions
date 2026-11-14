class Solution
{
    public:
        int reverse(int x)
        {
            int d = 0, rev = 0, min = INT_MIN, max = INT_MAX;
            while (x != 0)
            {
                d = x % 10;
                x = x / 10;
                if (rev > max/10 || rev < min/10)
                    return 0;
                rev = rev * 10 + d;
            }
            return rev;
        }
};