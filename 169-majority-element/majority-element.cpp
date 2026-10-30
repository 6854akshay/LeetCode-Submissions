class Solution
{
    public:
        int majorityElement(vector<int>& nums)
        {
            int candidate, count = 0;
            for (auto i : nums)
            {
                if (count == 0)
                {
                    candidate = i;
                    count++;
                }
                else if (candidate == i)
                    count++;
                else
                    count--;
            }
            return candidate;
        }
};