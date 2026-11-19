class Solution
{
    public:
        int minimizeSum(vector<int>& nums) 
        {
            array<int, 3>small;
            array<int, 3>large;
            small.fill(INT_MAX);
            large.fill(INT_MIN);
            for (auto i : nums)
            {
                if (i < small[0])
                {
                    small[2] = small[1];
                    small[1] = small[0];
                    small[0] = i;
                }
                else if (i < small[1])
                {
                    small[2] = small[1];
                    small[1] = i;
                }
                else if (i < small[2])
                    small[2] = i;
                
                if (i > large[0])
                {
                    large[2] = large[1];
                    large[1] = large[0];
                    large[0] = i;
                }
                else if (i > large[1])
                {
                    large[2] = large[1];
                    large[1] = i;
                }
                else if (i > large[2])
                    large[2] = i;
            }
            return min({
                large[1] - small[1],
                large[0] - small[2],
                large[2] - small[0]  
            });    
        }
};