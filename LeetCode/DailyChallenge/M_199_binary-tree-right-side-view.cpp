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
    vector<int> vc;
    
public:
    void traverse( int i, TreeNode* node ) {
        if( vc.size() <= i ) {
            vc.push_back( node -> val );
        }
        else {
            vc[i] = node -> val;
        }
        if( node -> left != NULL ) {
            traverse( i + 1, node -> left );
        }
        if( node -> right != NULL ) {
            traverse( i + 1, node -> right );
        }
    }
    
    vector<int> rightSideView( TreeNode* root ) {
        vc.clear();
        if( root != NULL ) {
            traverse( 0, root );
        }
        return vc;
    }
};