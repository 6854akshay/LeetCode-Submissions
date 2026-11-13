class Solution
{
    public:
        int arrayPairSum(vector<int>& nums)
        {
            int sum = 0, count = 0, i;
            vector<int> freq(20001, 0);
            for (auto i : nums)
                freq[i + 10000]++;
            for (i = 0; i < 20001; i++)
            {
                while(freq[i]--)
                {
                    if (count % 2 == 0)
                        sum+= i - 10000;
                    count++;
                }
            }
            return sum;
        }
};