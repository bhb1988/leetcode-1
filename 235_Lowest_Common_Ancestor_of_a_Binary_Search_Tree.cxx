class Solution {  
public:  
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {  
            if (root == NULL) {  
            return NULL;  
        }  
        int min = (p->val > q->val ? q->val:p->val);  
        int max = (p->val > q->val ? p->val: q->val);  
        if(max < root->val)  
            return lowestCommonAncestor(root->left, p, q);  
        if (min > root->val) {  
            return lowestCommonAncestor(root->right, p, q);  
        }  
        return root;  
    }  
};
