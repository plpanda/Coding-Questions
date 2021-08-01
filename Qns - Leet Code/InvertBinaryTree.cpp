//https://leetcode.com/problems/invert-binary-tree/
#include <stdio.h>
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
    TreeNode* invertTree(TreeNode* root) {
        if(root == NULL)
            return NULL;
        TreeNode* r = invertTree(root->right);
        TreeNode* l = invertTree(root->left);
        root->right = l;
        root->left = r;
        return root;
        
    }
};
int main(){
    return 0;
}