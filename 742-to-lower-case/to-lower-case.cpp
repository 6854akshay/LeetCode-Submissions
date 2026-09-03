class Solution
{
    public:
        string toLowerCase(string s)
        {
            string s1="";
            for (auto i : s)
            {
                if (i >= 'A' && i <= 'Z')
                    s1.push_back(i + 32);
                else
                    s1.push_back(i);
            }
            return s1;
        }
};