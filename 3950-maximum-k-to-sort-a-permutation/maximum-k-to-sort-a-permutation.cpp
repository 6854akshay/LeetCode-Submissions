class Solution
{
    public:
        int sortPermutation(vector<int>& nums)
        {
            int i, res = INT_MAX, n = nums.size();
            for (i = 0; i < n; i++)
            {
                if (nums[i]!= i)
                    res&= nums[i];
            }
            return res == INT_MAX ? 0 : res;
        }
};