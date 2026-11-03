class Solution {
public:
    vector<int> findSubstring(const string& s, vector<string>& words) {
        static short id[10001], tab[16384];
        static unsigned short need[5001], cur[5001];
        static const char* rep[5001];
        const uint64_t B = 1000003ULL, G = 0x9E3779B97F4A7C15ULL;
        int n = s.size(), m = words.size(), L = words[0].size();
        vector<int> res;
        if (n < m * L) return res;
        int bits = 1;
        while ((1 << bits) < m * 2) ++bits;
        int mask = (1 << bits) - 1, sh = 64 - bits;
        memset(tab, -1, sizeof(short) << bits);
        unsigned fm = 0;
        int k = 0;
        for (auto& w : words) {
            const char* p = w.data();
            fm |= 1u << (p[0] - 'a');
            uint64_t h = 0;
            for (int i = 0; i < L; ++i) h = h * B + (unsigned char)p[i];
            int slot = (int)((h * G) >> sh);
            bool found = false;
            while (tab[slot] >= 0) {
                int t = tab[slot];
                if (*rep[t] == *p && !memcmp(rep[t], p, L)) {
                    ++need[t];
                    found = true;
                    break;
                }
                slot = (slot + 1) & mask;
            }
            if (!found) {
                tab[slot] = k;
                rep[k] = p;
                need[k] = 1;
                ++k;
            }
        }
        const char* d = s.data();
        int last = n - L, hits = 0;
        uint64_t pw = 1, h = 0;
        for (int i = 1; i < L; ++i) pw *= B;
        for (int i = 0; i < L; ++i) h = h * B + (unsigned char)d[i];
        for (int i = 0;; ++i) {
            short r = -1;
            if (fm >> (d[i] - 'a') & 1) {
                int slot = (int)((h * G) >> sh);
                while (tab[slot] >= 0) {
                    const char* q = rep[tab[slot]];
                    if (*q == d[i] && !memcmp(q, d + i, L)) {
                        r = tab[slot];
                        ++hits;
                        break;
                    }
                    slot = (slot + 1) & mask;
                }
            }
            id[i] = r;
            if (i == last) break;
            h = (h - (unsigned char)d[i] * pw) * B + (unsigned char)d[i + L];
        }
        if (hits < m) return res;
        for (int off = 0; off < L; ++off) {
            int left = off, cnt = 0;
            for (int right = off; right <= last; right += L) {
                int w = id[right];
                if (w < 0) {
                    while (cnt) {
                        --cur[id[left]];
                        left += L;
                        --cnt;
                    }
                    left = right + L;
                    continue;
                }
                ++cur[w];
                ++cnt;
                while (cur[w] > need[w]) {
                    --cur[id[left]];
                    left += L;
                    --cnt;
                }
                if (cnt == m) {
                    res.push_back(left);
                    --cur[id[left]];
                    left += L;
                    --cnt;
                }
            }
            while (cnt) {
                --cur[id[left]];
                left += L;
                --cnt;
            }
        }
        return res;
    }
};