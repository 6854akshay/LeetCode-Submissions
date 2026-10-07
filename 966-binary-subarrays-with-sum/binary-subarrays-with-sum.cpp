class Solution
{
    public:
        int numSubarraysWithSum(vector<int>& nums, int goal)
        {
            int count = 0, pre_sum = 0;
            unordered_map<int,int> freq;
            freq[0] = 1;
            for (auto i : nums)
            {
                pre_sum += i;
                if (freq.find(pre_sum - goal) != freq.end())
                    count = count + freq[pre_sum - goal];
                freq[pre_sum]++;
            }
            return count;
        }
};