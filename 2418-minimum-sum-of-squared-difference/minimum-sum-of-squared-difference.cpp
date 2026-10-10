class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1, int k2) {
        int n = nums1.size();
        // Total allowed operations
        long long k = (long long)k1 + k2;
        
        // Frequency array to store the count of each absolute difference
        // The maximum possible difference is 10^5
        vector<int> count(100001, 0);
        long long sum_diff = 0;
        int max_diff = 0;
        
        // Populate the frequency array
        for (int i = 0; i < n; ++i) {
            int diff = abs(nums1[i] - nums2[i]);
            if (diff > 0) {
                count[diff]++;
                sum_diff += diff;
                max_diff = max(max_diff, diff);
            }
        }
        
        // If total k is greater than or equal to the sum of all differences,
        // we can reduce all differences to 0.
        if (sum_diff <= k) return 0;
        
        // Greedily reduce the maximum differences
        for (int d = max_diff; d > 0 && k > 0; --d) {
            if (count[d] > 0) {
                // We can at most reduce 'k' elements or all 'count[d]' elements
                long long reduce = min((long long)count[d], k);
                
                count[d] -= reduce;
                count[d - 1] += reduce;
                k -= reduce;
            }
        }
        
        // Calculate the final sum of squared differences
        long long ans = 0;
        for (long long d = 1; d <= max_diff; ++d) {
            if (count[d] > 0) {
                ans += count[d] * (d * d);
            }
        }
        
        return ans;
    }
};