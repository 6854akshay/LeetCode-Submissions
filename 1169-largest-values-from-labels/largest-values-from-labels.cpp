class Solution
{
public:
    int largestValsFromLabels(vector<int>& values, vector<int>& labels, int numWanted, int useLimit)
    {
        int n,i, sum = 0, val, lab;
        n = values.size();
        vector<pair<int,int>>mp(n);
        unordered_map<int, int> label_count;
        for (i = 0; i < n; i++)
            mp[i] = {values[i], labels[i]};
        sort(mp.rbegin(), mp.rend());
        for (i = 0; i < n && numWanted > 0; i++)
        {
            val = mp[i].first;
            lab = mp[i].second;
            if (label_count[lab] < useLimit)
            {
                sum = sum + val;
                label_count[lab]++;
                numWanted--;
            }
        }
        return sum;
    }
};