class Solution {
public:
    void backtrack(vector<int>& nums, vector<bool>& used,
                   vector<int>& temp, vector<vector<int>>& result) {
        
        if (temp.size() == nums.size()) {
            result.push_back(temp);
            return;
        }

        for (int i = 0; i < nums.size(); i++) {

            // Skip used elements
            if (used[i]) continue;

            // Skip duplicates
            if (i > 0 && nums[i] == nums[i - 1] && !used[i - 1]) continue;

            used[i] = true;
            temp.push_back(nums[i]);

            backtrack(nums, used, temp, result);

            // Backtrack
            used[i] = false;
            temp.pop_back();
        }
    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> temp;
        vector<bool> used(nums.size(), false);

        sort(nums.begin(), nums.end());

        backtrack(nums, used, temp, result);

        return result;
    }
};
