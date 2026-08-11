class Solution
{
    public:
    int smallestNumber(int n, int t)
    {
        int number = n;
        while(true)
        {
            int num = number, prod = 1;
            while (num!=0)
            {
                prod = prod * (num%10);
                num/=10;
            }
            if (prod%t == 0)
                return number;
            else
                number++;
        }  
    }
};