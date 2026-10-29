class Solution
{
    public:
        long long minimumCost(string s, string t, int flipCost, int swapCost, int crossCost)
        {
            int i;
            long long a = 0, b = 0, totalCost = 0, oppositePairs, costOpposite, remaining, identicalPairs, costIdentical;
            for (i = 0; i < s.size(); i++)
            {
                if (s[i] == '0' && t[i] == '1')
                    a++;
                else if (s[i] == '1' && t[i] == '0')
                    b++;
            }

            oppositePairs = min(a,b);
            costOpposite = min((long long)swapCost, 2LL * flipCost);
            totalCost += oppositePairs * costOpposite;

            remaining = max(a, b) - oppositePairs;
            identicalPairs = remaining / 2;

            costIdentical = min(1LL * crossCost + swapCost, 2LL * flipCost);
            totalCost += identicalPairs * costIdentical;

            if (remaining % 2 == 1)
                totalCost += flipCost;

            return totalCost;
        }
};