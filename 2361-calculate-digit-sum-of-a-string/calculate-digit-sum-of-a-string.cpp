class Solution
{
    public:
        string createSub(string s, int n, int k)
        {
            string new_s;
            int i = 0;
            while (i < n)
            {
                int ans = 0;
                string sub = s.substr(i, k);
                for (auto c : sub)
                    ans+= c - '0';
                new_s+=to_string(ans);
                i+=k;
            }
            return new_s;
        }
        string digitSum(string s, int k)
        {
            while (s.size() > k)
                s = createSub(s, s.size(), k);
            return s;
        }
};