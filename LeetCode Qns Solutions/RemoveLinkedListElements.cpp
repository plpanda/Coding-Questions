//https://leetcode.com/problems/remove-linked-list-elements/
#include<bits/stdc++.h>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(head == NULL)
            return NULL;
        ListNode* temp = head;
        if(head -> val == val){
            head = head->next;
            free(temp);
            return removeElements(head, val);
        }else{
            while(temp->next != NULL && temp->next->val != val)
                temp = temp->next;
            if(temp->next == NULL){
                //do nothing
            }else if(temp->next->val == val){
                ListNode* temp2 = temp->next;
                temp->next = removeElements(temp2->next, val);
                free(temp2);
            }
            return head;
        }
    }
};