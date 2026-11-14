class Solution
{
    public:
        int minimumSumSubarray(vector<int>& nums, int l, int r)
        {
            int w = l, sum, i, n = nums.size(), min_sum = INT_MAX;
            while (w <= r)
            {
                sum = 0;
                for (i = 0; i < w; i++)
                    sum+= nums[i];
                if (sum > 0 && sum < min_sum)
                    min_sum = sum;
                for (i = w; i < n; i++)
                {
                    sum-=nums[i - w];
                    sum+=nums[i];
                    if (sum > 0 && sum < min_sum)
                        min_sum = sum;;
                }
                w++;
            }
            return min_sum == INT_MAX ? -1 : min_sum;
        }
};