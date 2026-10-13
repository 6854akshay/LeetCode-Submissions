class Solution
{
    public:
        long long maxAlternatingSum(vector<int>& nums)
        {
            for (auto i = 0; i < nums.size(); i++)
                nums[i] = abs(nums[i]);
            sort(nums.begin(), nums.end());
            int n = nums.size(), index = n/2, i;
            long long sum = 0;
            for (i = 0; i < index; i++)
                sum = sum - (pow(nums[i], 2));
            for (;i < n; i++)
                sum = sum + (pow(nums[i], 2));
            return sum;
        }
};