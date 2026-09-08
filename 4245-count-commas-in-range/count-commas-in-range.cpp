class Solution
{
    public:
        int countCommas(int n)
        {
            int comm = 0;
            if (n>= 1000)
                comm = (n - 1000 + 1);
            return comm;
        }
};