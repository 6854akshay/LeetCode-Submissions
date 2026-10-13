class Solution
{
    public:
        long long maxAlternatingSum(vector<int>& nums)
        {
            int i, n = nums.size(), half = n/2;
            long long s = 0; 
            for (i = 0; i < nums.size(); i++)
                nums[i] = abs(nums[i]);
            nth_element(nums.begin(), nums.begin() + half, nums.end());
            for (i = 0; i < half; i++)
                s = s - (1LL * nums[i] * nums[i]);
            for (;i < n; i++)
                s = s + (1LL * nums[i] * nums[i]);
            return s;
        }
};