class Solution
{
    public:
        int peakIndexInMountainArray(vector<int>& arr)
        {
            int i,max = arr[0];
            for (i = 1; i < arr.size(); i++)
            {
                if (arr[i] < max)
                    return i-1;
                max = arr[i];
            }
            return i-1;
        }
};