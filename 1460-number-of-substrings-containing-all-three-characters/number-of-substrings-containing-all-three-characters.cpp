class Solution
{
    public:
        int numberOfSubstrings(string s)
        {
            ios_base::sync_with_stdio(false);
            cin.tie(NULL);
            int index[3] = {-1, -1, -1};
            int count = 0, i, m_ind;
            int n = s.length();
            for (i = 0; i < n; i++)
            {
                index[s[i] - 'a'] = i;
                if (index[0] != -1 && index[1] != -1 && index[2] != -1)
                {
                    m_ind = min({index[0], index[1], index[2]});
                    count =  count + m_ind + 1;
                }
            }
            return count;
        }
};