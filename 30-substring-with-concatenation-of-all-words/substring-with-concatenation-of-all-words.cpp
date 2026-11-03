class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int> ans;
        if (s.empty() || words.empty()) return ans;

        unordered_map<string, int> freq;
        for (const string& word : words) {
            freq[word]++;
        }

        int n = s.size();
        int wind = words[0].size();
        int num_words = words.size();

        // Run sliding window for each possible starting offset
        for (int i = 0; i < wind; i++) {
            unordered_map<string, int> seen;
            int left = i;
            int right = i;
            int count = 0; // Tracks valid words in current window

            while (right + wind <= n) {
                // Get the next word and expand the window
                string word = s.substr(right, wind);
                right += wind;

                if (freq.find(word) != freq.end()) {
                    seen[word]++;
                    count++;

                    // If we have too many of the current word, shrink window from the left
                    while (seen[word] > freq[word]) {
                        string left_word = s.substr(left, wind);
                        seen[left_word]--;
                        count--;
                        left += wind;
                    }

                    // If the window has exactly num_words, we found a match
                    if (count == num_words) {
                        ans.push_back(left);
                    }
                } else {
                    // Word is invalid, reset the entire window
                    seen.clear();
                    count = 0;
                    left = right;
                }
            }
        }
        return ans;
    }
};