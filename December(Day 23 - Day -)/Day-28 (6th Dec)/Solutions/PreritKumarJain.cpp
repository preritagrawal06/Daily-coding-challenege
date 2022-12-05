/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *fast=head,*slow=head,*res;
        while(fast->next != NULL && fast->next->next != NULL) {
            slow=slow->next;
            fast=fast->next->next;
        }
        if(fast->next == NULL) {
            res=slow;
        }
        else if(fast->next->next == NULL)
            res=slow->next;
        return res;
    }
};