/*
class Solution
{
    public:
        int minInsertions(string s)
        {
            int count = 0, open = 0, i;
            for (i = 0; i < s.size(); i++)
            {
                if (s[i] == '(')
                    open++;
                else
                {
                    if (i + 1 < s.size() && s[i + 1] == ')')
                        i++;
                    else
                        count++;
                    if (open > 0)
                        open--;
                    else
                        count++;
                }
            }
            return count + open*2;
        }
};
*/
class Solution {
public:
    int minInsertions(string s) {
        int res = 0, t = 0;
        for(char c: s) {
            if(c == '(') {
                if(t % 2) res++,t++;
                else t+= 2;
            }
            else if(t == 0) res++, t = 1;
            else t--;
        }
        return res + t;
    }
};