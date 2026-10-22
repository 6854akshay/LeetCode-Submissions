class Solution
{
    public:
        vector<int> arrayRankTransform(vector<int>& arr)
        {
            if (arr.size() == 0)
                return {};
            int i, rnk = 1;
            unordered_map<int,int> rank;
            vector <int> ans = arr;
            sort(ans.begin(), ans.end());
            for (i = 0; i < ans.size() - 1; i++)
            {
                if (ans[i] == ans[i + 1])
                    rank[ans[i]] = rnk;
                else
                    rank[ans[i]] = rnk++;
            }
            rank[ans[i]] = rnk;
            for (i = 0; i < arr.size(); i++)
                arr[i] = rank[arr[i]];
            return arr;
        }
};