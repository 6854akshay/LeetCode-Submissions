class Solution
{
    public:
        int minStartValue(vector<int>& nums)
        {
            int sum=0, least = 0;
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