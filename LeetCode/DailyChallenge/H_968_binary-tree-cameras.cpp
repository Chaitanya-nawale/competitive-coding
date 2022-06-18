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
    int minCameraCover( TreeNode* root ) {
        int cnt =0;
        if( root->left != NULL )
        {
            noCamera( root->left, root );   
        }
        if( root->right != NULL )
        {
            noCamera( root->right, root );   
        }
        if( root->val == 0 )
        {
            root->val = 2;
        }
        cnt = countTwos( root );
        return cnt;
    }
    void noCamera( TreeNode* current, TreeNode* parent )
    {
        if( current->left != NULL )
        {
            noCamera( current->left, current );   
        }
        if( current->right != NULL )
        {
            noCamera( current->right, current );   
        }
        if( current->val == 0 )
        {
            current->val = 1;
            parent->val = 2;
        } 
        if( current->val == 2 && parent->val == 0 )
        {
            parent->val = 1;
        }
    }
    int countTwos( TreeNode * current )
    {
        int cnt = 0;
        if( current->left != NULL )
        {
            cnt += countTwos( current->left );   
        }
        if( current->right != NULL )
        {
            cnt += countTwos( current-> right );   
        }
        if( current->val == 2 )
        {
            cnt++;
        }
        return cnt;
    }
};