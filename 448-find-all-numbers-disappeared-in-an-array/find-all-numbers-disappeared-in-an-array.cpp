class Solution
{
    public:
        vector<int> findDisappearedNumbers(vector<int>& nums)
        {
            vector<int> ans;
            int n = 1, i, len = nums.size();
            for (i = 0; i < len; i++)
            {
                while (nums[i] != nums[nums[i] - 1])
                    swap(nums[i], nums[nums[i] - 1]);
            }
            for (i = 0; i < len; i++)
            {
                if (nums[i] != i + 1)
                    ans.push_back(i + 1);
            }
            return ans;
        }
};