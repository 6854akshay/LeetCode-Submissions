class Solution
{
    public:
        bool canAliceWin(int n)
        {
            bool win = false;
            int rem = 10;
            while (true)
            {
                if (n >= rem)
                {
                    n-= rem;
                    rem--;
                    win = true;
                }
                if (n >= rem)
                {
                    n-= rem;
                    rem--;
                    win = false;
                }
                else
                    return win;
            }
            return win;
        }
};