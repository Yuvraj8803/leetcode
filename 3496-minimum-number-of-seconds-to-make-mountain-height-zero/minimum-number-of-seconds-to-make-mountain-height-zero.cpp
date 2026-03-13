class Solution {
public:
    
    bool canReduce(long long time, vector<int>& workerTimes, int h) {
        long long total = 0;
        
        for(int t : workerTimes) {
            
            long long left = 0, right = 1e5;
            long long best = 0;
            
            while(left <= right) {
                long long mid = (left + right) / 2;
                long long needed = (long long)t * mid * (mid + 1) / 2;
                
                if(needed <= time) {
                    best = mid;
                    left = mid + 1;
                } else {
                    right = mid - 1;
                }
            }
            
            total += best;
            if(total >= h) return true;
        }
        
        return false;
    }
    
    long long minNumberOfSeconds(int mountainHeight, vector<int>& workerTimes) {
        
        long long left = 0;
        long long right = 1e18;
        long long ans = right;
        
        while(left <= right) {
            long long mid = (left + right) / 2;
            
            if(canReduce(mid, workerTimes, mountainHeight)) {
                ans = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        
        return ans;
    }
};