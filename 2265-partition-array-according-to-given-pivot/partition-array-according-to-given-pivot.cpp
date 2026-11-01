class Solution
{
    public:
        vector<int> pivotArray(vector<int>& nums, int pivot)
        {
            int n = nums.size(), i, j, l = 0, r = n - 1;
            vector<int> ans(n);
            for (i = 0, j = n - 1; i < n; ++i, --j)
            {
                if (nums[i] < pivot)
                    ans[l++] = nums[i];
                if (nums[j] > pivot)
                    ans[r--] = nums[j];
            }
            while (l <= r)
                ans[l++] = pivot;
            return ans;
        }
};