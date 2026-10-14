class Solution
{
    public:
        string maxSumOfSquares(int num, int sum)
        {
            if (sum > 9*num)
                return "";
            string ans(num, '0');
            int nine = sum / 9, rem = sum % 9, i;
            for (i = 0; i < nine; i++)
                ans[i] = '9';
            if (nine < num)
                ans[nine] = '0' + rem;
            return ans;
        }
};