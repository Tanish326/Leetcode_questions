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
    void check(vector<string>&ans,string a,TreeNode* root){
        if(root==NULL){
            return;
        }
           if(root->left ==NULL && root->right==NULL){
            a += to_string(root->val);
            ans.push_back({a});
            return;
        }
         a += to_string(root->val);
     
        a += "->";
        check(ans,a,root->left);
        check(ans,a,root->right);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
         vector<string>ans;

         check(ans,"",root);
         return ans;
    }
};