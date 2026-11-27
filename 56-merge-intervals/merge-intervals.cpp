class Solution
{
    public:
        vector<vector<int>> merge(vector<vector<int>>& intervals)
        {
            sort(intervals.begin(), intervals.end());
            vector<vector<int>> ans;
            ans.push_back(intervals[0]);
            for (const auto& i : intervals)
            {
                if (ans.back()[1] >= i[0])
                    ans.back()[1] = max(ans.back()[1], i[1]);
                else
                    ans.push_back(i);
            }
            return ans;
        }
};