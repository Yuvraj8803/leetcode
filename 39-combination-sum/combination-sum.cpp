class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> current;
        solve(0, target, candidates, current, result);
        return result;
    }

private:
    void solve(int index, int target, vector<int>& candidates, 
               vector<int>& current, vector<vector<int>>& result) {
        
        if (target == 0) {
            result.push_back(current);
            return;
        }

        if (index >= candidates.size() || target < 0) return;

        current.push_back(candidates[index]);
        solve(index, target - candidates[index], candidates, current, result);
        current.pop_back();


        solve(index + 1, target, candidates, current, result);
    }
};