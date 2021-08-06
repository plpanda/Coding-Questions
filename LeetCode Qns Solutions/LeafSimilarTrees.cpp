//https://leetcode.com/problems/leaf-similar-trees/
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
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> arr1, arr2;
        getLeafNodes(root1, arr1);
        getLeafNodes(root2, arr2);
        return arr1 == arr2;
    }
    void getLeafNodes(TreeNode* root, vector<int> &arr){
        if(root == NULL)
            return;
        if(root->left == NULL && root->right == NULL)
            arr.push_back(root->val);
        getLeafNodes(root->left, arr);
        getLeafNodes(root->right, arr);
    }
};