//https://leetcode.com/problems/binary-tree-paths/
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
    vector<string> binaryTreePaths(TreeNode* root) {
        return getPaths(root, "");
    }
    vector<string> getPaths(TreeNode* root, string str){
        str = str + to_string(root->val);
        if(root->left == NULL && root->right == NULL){
            vector<string> s;
            s.push_back(str);
            return s;
        }
        str = str + + "->";
        if(root->left != NULL && root->right != NULL){
            vector<string> s1 = getPaths(root->left, str);
            vector<string> s2 = getPaths(root->right, str);
            s1.insert(s1.end(), s2.begin(), s2.end());
            return s1;
        }
        if(root->left != NULL){
            return getPaths(root->left, str);
        }
        return getPaths(root->right, str);
    }
};