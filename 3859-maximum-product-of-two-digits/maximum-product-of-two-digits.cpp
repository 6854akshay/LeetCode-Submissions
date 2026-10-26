class Solution
{
    public:
        int maxProduct(int n)
        {
            int prod = 1;
            if (n < 100)
                return (n % 10) * (n / 10);
            string num = to_string(n);
            sort(num.begin(), num.end());
            prod = (num[num.size() - 1] - '0') * (num[num.size() - 2] - '0');
            return prod;
        }
};