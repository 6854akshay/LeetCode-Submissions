class Solution
{
    public:
        int mostWordsFound(vector<string>& sentences)
        {
            int sp_count, max_len = -1, i, j;
            for (auto i : sentences)
            {
                sp_count = 0;
                for (auto j : i)
                {
                    if (j == ' ')
                        sp_count++;
                }
                max_len = max(max_len, sp_count + 1);
            }
            return max_len;
        }
};