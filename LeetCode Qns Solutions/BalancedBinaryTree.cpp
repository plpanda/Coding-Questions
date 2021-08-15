//https://leetcode.com/problems/balanced-binary-tree/
#include<bits/stdc++.h>
using namespace std;
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
    bool isBalanced(TreeNode* root) {
        return balancedTree(root).first;
    }
    pair<bool, int> balancedTree(TreeNode* root){
        if(root == NULL)
            return {true, 0};
        pair<bool, int> a = balancedTree(root->left), b = balancedTree(root->right);
        if((a.first && b.first) == false)
            return {false, -1};
        if(abs(a.second - b.second) > 1)
            return {false, -1};
        return {true, max(a.second, b.second) + 1};
    }
};