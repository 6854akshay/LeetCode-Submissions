class Solution
{
    public:
        int findDuplicate(vector<int>& nums)
        {
            int n = *max_element(nums.begin(), nums.end());
            vector<int> freq(n + 1,0);
            for (auto i : nums)
                freq[i]++;
            for (int i = 0; i < n+1; i++)
            {
                if (freq[i] > 1)
                    return i;
            }
            return -1;
        }
};