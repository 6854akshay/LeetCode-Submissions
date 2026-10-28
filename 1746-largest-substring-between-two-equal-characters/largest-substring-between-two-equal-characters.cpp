class Solution
{
    public:
        int maxLengthBetweenEqualCharacters(string s)
        {
            int i, max_length = -1, length;
            vector<int> occurence(26, -1);
            for (i = 0; i < s.size(); i++)
            {
                if (occurence[s[i] - 'a'] != -1)
                {
                    length = i - occurence[s[i] - 'a'] - 1;
                    if (length > max_length)
                        max_length = length;
                }
                else
                    occurence[s[i] - 'a'] = i;
            }
            return max_length;
        }
};