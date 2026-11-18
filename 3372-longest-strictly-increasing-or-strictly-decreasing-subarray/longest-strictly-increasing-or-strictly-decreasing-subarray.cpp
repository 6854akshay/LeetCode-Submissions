class Solution
{
    public:
        int longestMonotonicSubarray(vector<int>& nums)
        {
            int i, n = nums.size(), inc = 1, dec = 1, max_len = 1;
            for (i = 1; i < n; i++)
            {
                if (nums[i] > nums[i - 1])
                {
                    inc++;
                    dec = 1;
                }
                else if (nums[i] < nums[i - 1])
                {
                    dec++;
                    inc = 1;
                }
                else
                {
                    inc = 1;
                    dec = 1;
                }
                max_len = max({max_len, inc, dec});
            }
            return max_len;
        }
};