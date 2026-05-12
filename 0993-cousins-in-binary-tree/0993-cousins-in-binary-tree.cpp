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
    bool isCousins(TreeNode* root, int x, int y) {
        queue<pair<TreeNode*,int>>q1;
        q1.push({root,0});
        int parentx = root->val;
        int parenty = root->val;
        int deptx = 0;
        int depty = 0;
        while(!q1.empty()){
            TreeNode* node = q1.front().first;
            int dept = q1.front().second;
            q1.pop();
            if((node->left && node->left->val==x) || (node->right && node->right->val==x)){
                parentx = node->val;
                deptx = dept + 1;
            }
            if( (node->left && node->left->val==y) || (node->right && node->right->val==y)){
                parenty = node->val;
                depty = dept + 1;
            }
            if(node->right){
                q1.push({node->right,dept+1});
            }
            if(node->left){
                q1.push({node->left,dept+1});
            }
            
        }
        if(parentx==parenty){
            return false;
        }
        if(deptx!=depty){
            return false;
        }
        return true;
    }
};