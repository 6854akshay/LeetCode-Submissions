class Solution
{
    public:
        int sortPermutation(vector<int>& nums)
        {
            int i, res = -1, n = nums.size();
            for (i = 0; i < n; i++)
            {
                if (nums[i]!= i)
                    res&= nums[i];
            }
            return max(res, 0);
        }
};