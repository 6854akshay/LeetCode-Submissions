class Solution
{
    public:
        int minimumIndex(vector<int>& capacity, int itemSize)
        {
            int minCap = INT_MAX, index = capacity.size(), i;
            for(i = 0; i < capacity.size(); i++)
            {
                if (capacity[i] >= itemSize && capacity[i] < minCap)
                {
                    minCap = capacity[i];
                    index = i;   
                }
            }
            return index == capacity.size() ? -1 : index;
        }
};