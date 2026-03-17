/**
 * Definition for a binary tree node.
  * struct TreeNode {
   *     int val;
    *     TreeNode *left;
     *     TreeNode *right;
      *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
       *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
        *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
         * };
          */

          class BSTIterator {
          private:
              stack<TreeNode*> st;

                  // Push all left nodes
                      void pushAll(TreeNode* node) {
                              while (node) {
                                          st.push(node);
                                                      node = node->left;
                                                              }
                                                                  }

                                                                  public:
                                                                      BSTIterator(TreeNode* root) {
                                                                              pushAll(root);
                                                                                  }

                                                                                      int next() {
                                                                                              TreeNode* node = st.top();
                                                                                                      st.pop();

                                                                                                              // If right subtree exists, process it
                                                                                                                      if (node->right) {
                                                                                                                                  pushAll(node->right);
                                                                                                                                          }

                                                                                                                                                  return node->val;
                                                                                                                                                      }

                                                                                                                                                          bool hasNext() {
                                                                                                                                                                  return !st.empty();
                                                                                                                                                                      }
                                                                                                                                                                      };