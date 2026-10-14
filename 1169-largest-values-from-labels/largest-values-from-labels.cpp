class Solution
{
public:
    int largestValsFromLabels(vector<int>& values, vector<int>& labels, int numWanted, int useLimit)
    {
        unordered_map<int, vector<int>>mp;
        unordered_map<int, int> lab;
        int sum = 0, i, current_label;
        for (i = 0; i < values.size(); i++)
            mp[values[i]].push_back(labels[i]);
        sort(values.begin(), values.end(), greater<int>());
        for (auto i : values)
        {
            current_label = mp[i].back();
            mp[i].pop_back();
            if (lab[current_label] < useLimit)
            {
                sum = sum + i;
                lab[current_label]++;
                numWanted--;
            }            
            if (numWanted == 0)
                return sum;
        }
        return sum;           
    }
};