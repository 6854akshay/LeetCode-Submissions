class Solution
{
    public:
        string firstPalindrome(vector<string>& words)
        {
            int j, k;
            bool br;
            for (auto i : words)
            {
                j = 0;
                k = i.size() - 1;
                br = false;
                while (j < k)
                {
                    if (i[j++] != i[k--])
                    {
                        br = true;
                        break;
                    }
                }
                if (!br)
                    return i;
            }
            return "";
        }
};