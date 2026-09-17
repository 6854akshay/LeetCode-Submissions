class Solution
{
    public:
        int subarraySum(vector<int>& nums, int k)
        {
            int i, count = 0, pre = 0;
            unordered_map<int, int>map;
            for (i = 0; i < nums.size(); i++)
            {
                map[pre]++;
                pre = pre + nums[i];
                if (map.find(pre - k)!= map.end())
                    count+=map[pre-k];
            }
            return count;
        }
};