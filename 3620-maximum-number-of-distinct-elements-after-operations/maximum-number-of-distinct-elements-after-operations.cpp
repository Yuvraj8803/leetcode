class Solution {
public:
    int maxDistinctElements(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        long long last = LLONG_MIN;
        int ans = 0;

        for (long long x : nums) {
            long long l = x - k;
            long long r = x + k;
            long long val = max(l, last + 1);

            if (val <= r) {
                ans++;
                last = val;
            }
        }
        return ans;
    }
};