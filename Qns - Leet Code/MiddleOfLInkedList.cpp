//https://leetcode.com/problems/middle-of-the-linked-list/
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
    ListNode* middleNode(ListNode* head) {
        ListNode* temp = head;
        if(temp == NULL || temp->next == NULL)
            return temp;
        if(temp->next->next == NULL)
            return temp->next;
        ListNode* temp2 = temp->next->next;
        
        while(1){
            temp = temp->next;
            temp2 = temp2->next;
            if(temp2 != NULL){
                temp2 = temp2->next;
                if(temp2 == NULL)
                    return temp->next;
            }
            else
                return temp;
        }
    }
};