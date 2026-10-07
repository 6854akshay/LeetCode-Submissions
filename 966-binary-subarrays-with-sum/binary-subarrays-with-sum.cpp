class Solution
{
    public:
        int maxSubarray(vector<int>&nums, int k)
        {
            if (k < 0)
                return 0;
            int left = 0, right, curr_sum = 0, count = 0;
            for (right = 0; right < nums.size(); ++right)
            {
                curr_sum += nums[right];
                while (curr_sum > k)
                {
                    curr_sum = curr_sum - nums[left];
                    left++;
                }
                count += (right - left + 1);
            }
            return count;
        }
        int numSubarraysWithSum(vector<int>& nums, int goal)
        {
            return maxSubarray(nums, goal) - maxSubarray(nums, goal - 1);
        }
};