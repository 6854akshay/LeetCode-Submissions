class Solution
{
    public:
        string maxSumOfSquares(int num, int sum)
        {
            vector <char> ans(num, '0');
            if (sum > 9*num)
                return "";
            if (sum < 9)
            {
                ans[0] = '0' + sum;
                string s(ans.begin(), ans.end());
                return s;
            }
            int index = 0;
            while (sum > 9)
            {
                ans[index] = '9';
                sum = sum - 9;
                index++;
            }
            ans[index] = '0' + sum;
            string s(ans.begin(), ans.end());
            return s;
        }
};