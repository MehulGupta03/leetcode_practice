
class Solution {
public:
    void flatten(TreeNode* root) {
        if (root == NULL) return;

        vector<int> arr;
        stack<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            TreeNode* node = q.top();
            q.pop();

            arr.push_back(node->val);

            if (node->right != NULL) {
                q.push(node->right);
            }

            if (node->left != NULL) {
                q.push(node->left);
            }
        }

        TreeNode* temp1 = root;
        temp1->left = NULL;

        for (int i = 1; i < arr.size(); i++) {
            temp1->right = new TreeNode(arr[i]);
            temp1 = temp1->right;
            temp1->left = NULL;
        }
    }
};
