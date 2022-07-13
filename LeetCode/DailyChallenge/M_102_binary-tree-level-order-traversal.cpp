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
class Solution {
public:
    vector<vector<int>> levelOrder( TreeNode* root ) {
        vector<vector<int>> result;
        if( root == NULL ) {
            return result;
        }
        queue<pair<TreeNode*,int>> que;
        que.push( { root, 0 } );
        TreeNode* curr;
        int level = 0;
        while( !que.empty() ) {
            curr = que.front().first;
            level = que.front().second;
            if( result.size() <= level ){
                vector<int> levelVec;
                result.push_back( levelVec );
            }
            result[level].push_back( curr->val );
            if( curr->left != NULL ) {
                que.push( { curr->left, level + 1 } );
            }
            if( curr->right != NULL ) {
                que.push( { curr->right, level + 1 } );
            }
            que.pop();
        }
        return result;
    }
};