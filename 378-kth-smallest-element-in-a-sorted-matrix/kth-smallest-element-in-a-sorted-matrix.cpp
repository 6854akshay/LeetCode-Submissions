class Solution
{
public:
    int countLess(vector<vector<int>>& matrix, int mid, int n)
    {
        int count = 0, row = n - 1, col = 0;
        while (row >= 0 && col < n)
        {
            if (matrix[row][col] <= mid)
            {
                count += (row + 1);
                col++;
            }
            else
                row--;
        }
        return count;
    }
    int kthSmallest(vector<vector<int>>& matrix, int k)
    {
        int n = matrix.size(), low = matrix[0][0], high = matrix[n - 1][n - 1], mid;
        
        while (low < high)
        {
            mid = low + (high - low) / 2;
            if (countLess(matrix, mid, n) < k)
                low = mid + 1;
            else
                high = mid;
        }
        return low;
    }
};