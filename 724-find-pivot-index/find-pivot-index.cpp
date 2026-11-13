class Solution
{
    public:
        int pivotIndex(vector<int>& nums)
        {
            int l_sum = 0, r_sum = 0, i, n = nums.size();
            for (auto i : nums)
                r_sum+= i;
            for (i = 0; i < n; i++)
            {
                if (l_sum == r_sum - nums[i])
                    return i;
                l_sum+= nums[i];
                r_sum-= nums[i];
            }
            return -1;
        }
};