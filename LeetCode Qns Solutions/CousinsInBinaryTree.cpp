//https://leetcode.com/problems/cousins-in-binary-tree/
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
    pair<int, int> depth(TreeNode* root, int key){
        if(root == NULL)
            return {0,0};
        if(root->val == key)
            return {1,0};
        pair<int,int> a = depth(root->left, key), b = depth(root->right, key);
        if(a.first != 0){
            a.first++;
            if(a.first == 2)
                a.second = root->val;
            return a;
        } 
        if(b.first != 0){
            b.first++;
            if(b.first == 2)
                b.second = root->val;
            return b;
        }
        return {0,0};
    }
    bool isCousins(TreeNode* root, int x, int y) {
        pair<int,int> a = depth(root, x), b = depth(root, y);
        if(a.first == b.first && a.second != b.second)
            return true;
        return false;
    }
};