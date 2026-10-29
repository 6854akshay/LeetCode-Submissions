class Solution
{
public:
    int kthSmallest(vector<vector<int>>& matrix, int k)
    {
        int n = matrix.size(), i = 0;
        vector<int> mat(n*n);
        for (auto j : matrix)
        {
            for (auto k : j)
                mat[i++] = k;
        }
        sort(mat.begin(), mat.end());
        return mat[k - 1];
    }
};