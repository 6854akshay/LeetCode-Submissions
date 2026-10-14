class Solution
{
    public:
        int maxNumberOfBalloons(string text)
        {
            int count = 0;
            unordered_map <char,int>mp;
            for (auto i : text)
                mp[i]++;
            while (true)
            {
                if (mp['b']>= 1 && mp['a']>= 1 && mp['l']>= 2 && mp['o']>= 2 && mp['n']>= 1)
                {
                    mp['b']--;mp['a']--;mp['l']-=2;mp['o']-=2;mp['n']--;
                    count++;
                }
                else
                    break;
            }
            return count;
        }
};