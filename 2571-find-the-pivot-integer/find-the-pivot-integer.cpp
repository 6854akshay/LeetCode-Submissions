class Solution
{
    public:
        int pivotInteger(int n)
        {
            int i, sum_i, sum_n = n * (n + 1) / 2;
            for (i = 1; i <= n; i++)
            {
                sum_i = i * (i + 1) / 2; 
                if (sum_i == sum_n - sum_i + i)
                    return i;
            }
            return -1;
        }
};