class Solution
{
    public:
        int missingMultiple(vector<int>& nums, int k)
        {
            int i, n = nums.size();
            unordered_map<int,int> freq;
            for (auto i : nums)
                freq[i]++;
            i = 1;
            while (true)
            {
                if (freq.find(k*i) == freq.end())
                    return k*i;
                i++;
            }
            return -1;
        }
};