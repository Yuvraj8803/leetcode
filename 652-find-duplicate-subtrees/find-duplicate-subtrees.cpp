/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right)
 *         : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    unordered_map<string, int> mp;
    vector<TreeNode*> result;
    string dfs(TreeNode* root) {
        if (!root) return "N";   
        string serial = to_string(root->val) + "," 
                        + dfs(root->left) + "," 
                        + dfs(root->right);

        mp[serial]++;
        if (mp[serial] == 2) {
            result.push_back(root);
        }
        return serial;
    }
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        dfs(root);
        return result;
    }
};