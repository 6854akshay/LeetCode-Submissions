class Solution
{
    public:
        bool asteroidsDestroyed(int mass, vector<int>& asteroids)
        {
            unsigned long ast = mass;
            int m = *max_element(asteroids.begin(), asteroids.end());
            vector<int> arr(m + 1, 0);
            for (auto i : asteroids)
                arr[i]++;
            unsigned long i;
            for (i = 0; i <= m; i++)
            {
                if (ast < i)
                    return false;
                ast = ast + (i*arr[i]);
            }
            return true;
        }
};