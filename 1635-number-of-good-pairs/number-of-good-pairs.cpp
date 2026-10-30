class Solution
{
    public:
        int numIdenticalPairs(vector<int>& nums)
        {
            int ans = 0;
            unordered_map<int, int> freq;
            for (auto i : nums)
            {
                if (freq[i])
                    ans+= freq[i];
               freq[i]++;
            }
            return ans;
        }
};