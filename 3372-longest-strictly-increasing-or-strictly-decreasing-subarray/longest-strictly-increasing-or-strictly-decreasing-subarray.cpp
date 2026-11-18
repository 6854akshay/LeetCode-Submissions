class Solution
{
    public:
        int longestMonotonicSubarray(vector<int>& nums)
        {
            int i, j, n = nums.size(),max_increasing = 1, max_decreasing = 1, increasing, decreasing;
            for (i = 0; i < n; i++)
            {
                increasing = 1;
                decreasing = 1;
                for (j = i; j < n - 1; j++)
                {
                    if (nums[j] >= nums[j+1])
                        break;
                    increasing++;
                }
                if (increasing > max_increasing)
                    max_increasing = increasing;
                for (j = i; j < n - 1; j++)
                {
                    if (nums[j] <= nums[j+1])
                        break;
                    decreasing++;
                }
                if (decreasing > max_decreasing)
                    max_decreasing = decreasing;
            }
            return max_increasing > max_decreasing ? max_increasing : max_decreasing;   
        }
};