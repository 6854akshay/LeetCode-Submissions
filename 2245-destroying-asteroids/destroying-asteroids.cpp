class Solution
{
    public:
        bool asteroidsDestroyed(int mass, vector<int>& asteroids)
        {
            long m = mass;
            sort(asteroids.begin(), asteroids.end());
            for (auto i : asteroids)
            {
                if (m < i)
                    return false;
                m = m + i;
            }
            return true;
        }
};