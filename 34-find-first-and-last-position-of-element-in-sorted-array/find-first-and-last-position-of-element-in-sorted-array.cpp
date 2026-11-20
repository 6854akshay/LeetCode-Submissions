class Solution
{
    public:
        int binSearch(vector<int>& nums, int target, int l, int h)
        {
            int m;
            while (l <= h)
            {
                m = l + (h - l) / 2;
                if (nums[m] == target)
                    return m;
                else if (nums[m] < target)
                    l = m + 1;
                else
                    h = m - 1;
            }
            return -1;
        }
        vector<int> searchRange(vector<int>& nums, int target)
        {
            int l = 0, h = nums.size() - 1, m, x, y;
            vector<int> ans = {-1 , - 1};
            while (l <= h)
            {
                m = l + (h - l) / 2;
                if (nums[m] == target)
                {
                    ans[0] = m;
                    ans[1] = m;
                    x = binSearch(nums, target, l, m - 1);
                    while (x != -1)
                    {
                        ans[0] = x;
                        x = binSearch(nums, target, l, x - 1);
                    }
                    y = binSearch(nums, target, m + 1, h);
                    while (y != -1)
                    {
                        ans[1] = y;
                        y = binSearch(nums, target, y + 1, h);
                    }
                    return ans;
                }
                else if (nums[m] > target)
                    h = m - 1;
                else
                    l = m + 1;
            }
            return ans;
        }
};