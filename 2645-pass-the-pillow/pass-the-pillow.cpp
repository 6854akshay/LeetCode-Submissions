class Solution
{
    public:
        int passThePillow(int n, int time)
        {
            int dir = 1, person = 1;
            while (time != 0)
            {
                person+= dir;
                time--;
                if (person == n || person == 1)
                    dir*= -1;
            }
            return person;
        }
};