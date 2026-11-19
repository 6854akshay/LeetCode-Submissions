class Solution
{
    public:
        int threeSumClosest(vector<int>& nums, int target)
        {
            sort(nums.begin(), nums.end());
            int n = nums.size(), closest = INT_MAX / 2, i, left, right, s;
            for (i = 0; i < n - 2; i++)
            {
                left = i + 1, right = n - 1;
                while (left < right)
                {
                    s = nums[i] + nums[left] + nums[right];
                    if (abs(s - target) < abs(closest - target))
                        closest = s;

                    if (s < target)
                        left++;
                    else if (s > target)
                        right--;
                    else
                        return s;
                }
            }
            return closest;
        }
};