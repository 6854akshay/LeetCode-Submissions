class Solution
{
    public:
        int arrayPairSum(vector<int>& nums)
        {
            sort(nums.begin(), nums.end());
            int i, ans = 0, n = nums.size() - 1;
            for (i = n - 1; i >= 0; i-=2)
                ans+=nums[i];
            return ans;
        }
};