class Solution
{
    public:
        string convert(string s)
        {
            string ans = "";
            for (char i : s)
                ans+= to_string(i - 'a');
            return ans;
        }
        bool isSumEqual(string firstWord, string secondWord, string targetWord)
        {
            string a = convert(firstWord);
            string b = convert(secondWord);
            string c = convert(targetWord);
            if (stoi(a) + stoi(b) == stoi(c))
                return true;
            return false;
        }
};