/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nulltemptr) {}
 *     ListNode(int x) : val(x), next(nulltemptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
    public:
    ListNode* removeZeroSumSublists(ListNode* head) {
        if(head == NULL)
            return NULL;
        ListNode *temp = new ListNode(0,head);
        ListNode *curr,*curr1=temp;
        while(curr1 != NULL) {
            curr = curr1->next;
            int sum = 0;
            while(curr != NULL) {
                sum+=curr->val;
                if(sum == 0)
                    curr1->next = curr->next;
                curr = curr->next;
            }
            curr1 = curr1->next;
        }
        return temp->next;
        
    }
};