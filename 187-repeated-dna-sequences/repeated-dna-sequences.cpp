class Solution
{
    public:
    vector<string> findRepeatedDnaSequences(string s)
    {
        vector<string> ans;
        unordered_map<string, int>mp;
        string chk = "";
        for (int i = 0; i < 10; i++)
            chk+= s[i];
        mp[chk]++;
        for (int i = 10; i < s.size(); i++)
        {
            chk+=s[i];
            chk.erase(0,1);
            mp[chk]++;
        }
        for (auto i : mp)
        {
            if (i.second > 1)
                ans.push_back(i.first);
        }
        return ans;
    }
};