class Solution
{
    public:
        vector<int> decimalRepresentation(int n)
        {
            string num = to_string(n);
            int p = num.size() - 1;
            vector <int> base;
            for (auto i : num)
            {
                int d = i - '0';
                if (d != 0)
                    base.push_back(d * pow(10,p));
                p--;
            }
            return base;

        }
};