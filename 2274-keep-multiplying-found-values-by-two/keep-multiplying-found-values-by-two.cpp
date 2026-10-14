class Solution
{
    public:
        int findFinalValue(vector<int>& nums, int original)
        {
            unordered_set<int> st;
            for (auto i : nums)
                st.insert(i);
            while (st.find(original) != st.end())
                original = original * 2;
            return original;
        }
};