class Solution
{
    public:
        int minAddToMakeValid(string s)
        {
            int count = 0;
            stack <int> st;
            for (int i = 0; i < s.size(); i++)
            {
                if (st.empty() && s[i]==')')
                {
                    count++;
                    continue;
                }
                if (s[i] == '(')
                    st.push(s[i]);
                else if (s[i] == ')')
                    st.pop();
            }
            return st.size() + count;
        }
};