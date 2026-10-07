class Solution
{
    public:
        int smallestAbsent(vector<int>& nums)
        {
            float avg = 0;
            int x = 1;
            for (auto i : nums)
                avg = avg + i;
            avg = avg / nums.size();
            while (true)
            {
                if (x > avg && find(nums.begin(), nums.end(), x) == nums.end())
                    return x;
                x++;
            }
        }
};