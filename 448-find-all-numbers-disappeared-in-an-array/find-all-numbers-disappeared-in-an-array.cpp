class Solution
{
    public:
        vector<int> findDisappearedNumbers(vector<int>& nums)
        {
            int n = 1, i, len = nums.size(), indx;
            vector<int> ans;
            for (i = 0; i < len; i++)
            {
                indx = abs(nums[i]) - 1;
                if (nums[indx] > 0)
                    nums[indx] = -nums[indx];
            }
            for (i = 0; i < len; i++)
            {
                if (nums[i] > 0)
                    ans.push_back(i + 1);
            }
            return ans;
        }
};