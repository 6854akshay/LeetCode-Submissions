class Solution
{
    public:
        int maximumCount(vector<int>& nums)
        {
            int c0 = 0, c1 = 0;
            for (auto i : nums)
            {
                if (i > 0)
                    c1++;
                else if (i < 0)
                    c0++;
            }
            return c0>c1 ? c0 : c1;
        }
};