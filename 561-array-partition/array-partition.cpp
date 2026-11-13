class Solution
{
    public:
        int arrayPairSum(vector<int>& nums)
        {
            sort(nums.begin(), nums.end());
            int i, ans = 0, n = nums.size();
            for (i = 0; i < n; i+=2)
                ans+=nums[i];
            return ans;
        }
};