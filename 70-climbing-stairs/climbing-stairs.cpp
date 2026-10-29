class Solution {
public:
    int climbStairs(int n)
    {
        int a = 1, b = 2, c;
        while (n-- > 2)
        {
            c = a + b;
            a = b;
            b = c;
        }
        return (n == 0) ? a : b;   
    }
};