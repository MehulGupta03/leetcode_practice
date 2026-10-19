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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> res;
        rightview(root,0, res);
        return res;
    }
    private:
        void rightview(TreeNode* node,int level, std::vector<int>& res){
            if(node==NULL){
                return ;
            }
            if(level==res.size()){
                res.push_back(node->val);
            }
            rightview(node->right,level+1, res);
            rightview(node->left,level+1, res);
        }
};