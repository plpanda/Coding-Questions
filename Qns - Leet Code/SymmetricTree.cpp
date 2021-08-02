//https://leetcode.com/problems/symmetric-tree/submissions/
#include<stdio.h>
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
class Solution {
public:
    bool chkSymmetry(TreeNode* t1, TreeNode* t2){
        if(t1 == NULL && t2 == NULL)
            return true;
        if(t1 == NULL || t2 == NULL)
            return false;
        return (t1->val == t2->val) && 
            chkSymmetry(t1->left, t2->right) && 
            chkSymmetry(t2->left, t1-> right);
    }
    bool isSymmetric(TreeNode* root) {
        return chkSymmetry(root, root);
    }
};