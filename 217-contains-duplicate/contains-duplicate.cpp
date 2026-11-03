class Solution
{
    public:
        bool containsDuplicate(vector<int>& nums)
        {
            unordered_set<int> freq;
            for (auto i : nums)
                freq.insert(i);
            return freq.size() == nums.size() ? false : true;
        }
};