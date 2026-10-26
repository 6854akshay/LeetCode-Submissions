class Solution
{
    public:
        int maxProduct(int n)
        {
            int prod, l;
            if (n < 100)
                return (n % 10) * (n / 10);
            string num = to_string(n);
            sort(num.begin(), num.end());
            l = num.size();
            prod = (num[l - 1] - '0') * (num[l - 2] - '0');
            return prod;
        }
};