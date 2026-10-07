class Solution
{
    public:
        int smallestAbsent(vector<int>& nums)
        {
            unordered_map <int, int>freq;
            float avg = 0;
            int x;
            for (auto i : nums)
            {
                freq[i]++;
                avg = avg + i;
            }
            avg = avg / nums.size();
            x = floor(avg) + 1;
            if (x <= 0)
                x = 1;
            while (true)
            {
                if (freq.find(x) == freq.end())
                    return x;
                x++;
            }
        }
};