class Solution
{
    public:
        bool searchMatrix(vector<vector<int>>& matrix, int target)
        {
            int i = 0, m = matrix.size(), j = matrix[0].size() - 1;
            while (i < m && j>=0)
            {
                if (matrix[i][j] == target)
                    return true;
                matrix[i][j] > target ? j-- : i++;
            }
            return false; 
        }
};