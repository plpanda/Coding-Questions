//https://leetcode.com/problems/reverse-linked-list/
#include<stdio.h>
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* temp = head, *temp2;
        head = NULL;
        while(temp != NULL){
            temp2 = temp;
            temp = temp->next;
            temp2->next = head;
            head = temp2;
        }
        return head;
    }
};