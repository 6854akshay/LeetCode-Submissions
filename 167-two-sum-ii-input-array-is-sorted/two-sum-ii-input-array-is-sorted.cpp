class Solution
{
    public:
        vector<int> twoSum(vector<int>& numbers, int target)
        {
            int l = 0, h = numbers.size() - 1, t;
            while (l < h)
            {
                t = numbers[l] + numbers[h];
                if (t == target)
                    return {l + 1, h + 1};
                else if (t < target)
                    l++;
                else
                    h--;
            }
            return {-1, -1};
        }
};