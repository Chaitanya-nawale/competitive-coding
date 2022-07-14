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
    TreeNode* buildTree( vector<int>& preorder, vector<int>& inorder ) {
        TreeNode * root = new TreeNode( preorder[0] );
        int left = 0;
        int right = 0;
        for( int i = 0; i < inorder.size(); i++ ) {
            if( inorder[i] == preorder[0] ){
                left = i - 1;
                right = i + 1;
            }
        }
        if( left >= 0 ) {
            vector<int> lpre( preorder.begin() + 1, preorder.begin() + left + 2 );
            vector<int> lin( inorder.begin(), inorder.begin() + left + 1 );
            root -> left = buildTree( lpre, lin );
        }
        if( right < inorder.size() ) {
            vector<int> rpre( preorder.begin() + right, preorder.end() );
            vector<int> rin( inorder.begin() + right, inorder.end() );
            root -> right = buildTree( rpre, rin );
        }
        return root;
    }
};