class Solution
{
    public:
        int maxFrequencyElements(vector<int>& nums) 
        {
            int max_freq = INT_MIN, count, ans = 0;
            unordered_map<int, int> freq;
            for (auto i : nums)
                freq[i]++;
            for (auto i : freq)
            {
                count = i.second;
                if (count > max_freq)
                    max_freq = count;
            }
            for (auto i : freq)
            {
                if (i.second == max_freq)
                    ans+= max_freq;
            }
            return ans;
        }
};