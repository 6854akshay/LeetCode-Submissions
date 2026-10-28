class Solution
{
    public:
        long long maximumValue(int n, int s, int m)
        {
            if (n == 1)
                return s;
            long long u = n / 2, d = u - 1;
            return (long long)s + (u * m) - d;
        }
};