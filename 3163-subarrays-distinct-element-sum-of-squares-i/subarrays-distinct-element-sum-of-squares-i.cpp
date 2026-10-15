class Solution
{
    public:
        int sumCounts(vector<int>& nums)
        {
            int sum = 0, i, j, n = nums.size();
            for (i = 0; i < n; i++)
            {
                unordered_set<int> st;
                for (j = i; j < n; j++)
                {
                    st.insert(nums[j]);
                    int count = st.size();
                    sum+= count * count;
                }
            }
            return sum;
        }
};