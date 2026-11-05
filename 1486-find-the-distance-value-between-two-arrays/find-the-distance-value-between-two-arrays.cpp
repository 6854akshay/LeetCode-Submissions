class Solution
{
    public:
        int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d)
        {
            int i, n = arr2.size(), l, h, m, count = 0;
            bool flag;
            sort(arr2.begin(), arr2.end());
            for (auto i : arr1)
            {
                l = 0, h = n - 1;
                flag = false;
                while (l <= h)
                {
                    m = l + (h - l)/2;
                    if (abs(i - arr2[m]) <= d)
                    {
                        flag = true;
                        break;
                    }
                    if (arr2[m] < i)
                        l = m + 1;
                    else
                        h = m - 1;
                }
                if (!flag)
                    count++;
            }
            return count;

        }
};