class Solution
{
    public:
        int largestAltitude(vector<int>& gain)
        {
            int alt = 0, high = 0;
            for (auto i : gain)
            {
                alt+=i;
                if (alt > high)
                    high = alt;
            }
            return high;
        }
};