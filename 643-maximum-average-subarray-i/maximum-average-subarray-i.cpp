class Solution
{
    public:
        double findMaxAverage(vector<int>& nums, int k)
        {
            int i, index, sum = 0, max_sum = 0;
            for (i = 0; i < k; i++)
            {
                max_sum+=nums[i];
                sum+=nums[i];
            }
            for (i = k; i < nums.size(); i++)
            {
                sum+=nums[i];
                sum-=nums[i - k];
                if (sum > max_sum)
                    max_sum = sum;
            }
            return (double)max_sum/k;
        }
};