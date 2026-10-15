class Solution
{
    public:
        string removeStars(string s)
        {
            int i=0,j=0, n = s.size();
            while(j < n)
            {
                if(s[j] == '*')
                    i--;
                else
                {
                    s[i]=s[j];
                    i++;
                }
                j++;
            }
            s.resize(i);
            return s;
        }
};