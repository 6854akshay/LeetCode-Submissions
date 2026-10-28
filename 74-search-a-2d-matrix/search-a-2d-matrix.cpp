class Solution 
{
    public:
        bool searchMatrix(vector<vector<int>>& matrix, int target)
        {
            int m = matrix.size(), n = matrix[0].size(), i = 0, j = m * n - 1, mid, ele;
            while (i <= j)
            {
                mid = i + (j - i)/2;
                ele = matrix[mid / n][mid % n];
                if (target == ele)
                    return true;
                else if (target > ele)
                    i = mid + 1;
                else
                    j = mid - 1;
            }
            return false;  
        }
};