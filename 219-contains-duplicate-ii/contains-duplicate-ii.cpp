class Solution
{
    public:
        bool containsNearbyDuplicate(vector<int>& nums, int k)
        {
            unordered_map<int,vector<int>> freq;
            int i;
            for (i = 0; i < nums.size(); i++)
            {
                if (freq.find(nums[i]) != freq.end())
                {
                    for (auto j : freq[nums[i]])
                    {
                        if (abs(i - j) <= k)
                            return true;
                    }
                }
                freq[nums[i]].push_back(i);
            }
            return false;
        }
};