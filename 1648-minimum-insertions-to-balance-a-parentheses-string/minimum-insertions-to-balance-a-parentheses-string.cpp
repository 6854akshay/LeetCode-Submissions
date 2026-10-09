class Solution
{
    public:
        int minInsertions(string s)
        {
            int count = 0;
            int cl = 0;
            stack<char> st;
            for (auto i : s)
            {
                if (i == '(')
                {
                    if (cl == 1)
                    {
                        count++;
                        if (st.empty())
                            count++;
                        else
                            st.pop();
                        cl = 0;
                    }
                    st.push(i);
                }
                else
                {
                    cl++;
                    if (cl == 2)
                    {
                        if (st.empty())
                            count++;
                        else
                            st.pop();
                        cl = 0;
                    }
                }
            }
            if (cl == 1)
            {
                count++;
                if (st.empty())
                    count++;
                else
                    st.pop();
            }
            count += st.size()*2;
            return count;
        }
};