class Solution
{
    public:
        int minStartValue(vector<int>& nums)
        {
            int val=0;
            int sum=0;
            int least = 0;
            for (auto i : nums)
            {
                sum+=i;
                if (sum < least)
                    least = sum;
            }
            least = abs(least) + 1;
            return least;
        }
};