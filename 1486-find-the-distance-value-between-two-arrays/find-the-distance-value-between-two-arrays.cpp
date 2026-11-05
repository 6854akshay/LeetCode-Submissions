class Solution
{
    public:
        bool findDistance(int ele, vector<int>&arr2, int d)
        {
            for (auto i : arr2)
            {
                if (abs(ele - i) <= d)
                    return false;
            }
            return true;
        }
        int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d)
        {
            int count = 0;
            for (auto i : arr1)
            {
                if (findDistance(i, arr2, d))
                    count++;
            }
            return count;
        }
};