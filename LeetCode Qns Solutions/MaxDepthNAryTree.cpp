//https://leetcode.com/problems/maximum-depth-of-n-ary-tree/
#include<bits/stdc++.h>
using namespace std;
class Node {
public:
    int val;
    vector<Node*> children;
    Node() {}
    Node(int _val) {
        val = _val;
    }
    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
class Solution {
public:
    int maxDepth(Node* root) {
        if(root == NULL)    return 0;
        vector<int> depth;
        int n = root->children.size();
        if(n == 0) return 1;
        for(int i = 0; i < n; ++i)
            depth.push_back(maxDepth(root->children[i]));
        return (*max_element(depth.begin(), depth.end())) + 1;
    }
};