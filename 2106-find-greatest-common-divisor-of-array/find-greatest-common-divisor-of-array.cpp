class Solution
{
    public:
        int gcd(int a, int b)
        {
            return (b == 0) ? a : gcd(b, a % b);
        }
        int findGCD(vector<int>& nums)
        {
            int minn = 1001, maxx = 0;
            for (auto i : nums)
            {
                if (i < minn)
                    minn = i;
                if (i > maxx)
                    maxx = i;
            }
            return gcd(minn, maxx);
        }
};