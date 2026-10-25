class Solution
{
    public:
        bool isPerfectSquare(int num)
        {
            if (num == 0)
                return true;
            int l = 1, h = num, m;
            while (l <= h)
            {
                m = l + (h - l)/2;
                if (num/m == m && num % m == 0)
                    return true;
                else if (num/m < m)
                    h = m - 1;
                else
                    l = m + 1;
            }
            return false;
        }
};