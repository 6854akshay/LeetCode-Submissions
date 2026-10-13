class Solution
{
    public:
        long long maxAlternatingSum(vector<int>& nums)
        {
            int i, n = nums.size(), index = n/2;
            long long sum = 0; 
            for (i = 0; i < nums.size(); i++)
                nums[i] = abs(nums[i]);
            nth_element(nums.begin(), nums.begin() + index, nums.end());
            for (i = 0; i < index; i++)
                sum = sum - (pow(nums[i], 2));
            for (;i < n; i++)
                sum = sum + (pow(nums[i], 2));
            return sum;
        }
};