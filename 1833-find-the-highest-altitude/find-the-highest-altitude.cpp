class Solution
{
    public:
        int largestAltitude(vector<int>& gain)
        {
            int alt = 0;
            int high = 0;
            for (auto i : gain)
            {
                alt+=i;
                if (alt > high)
                    high = alt;
            }
            return high;
        }
};