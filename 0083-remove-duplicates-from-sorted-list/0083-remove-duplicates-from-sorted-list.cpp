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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* current=head;
        if(!head||!head->next)return head;
        while(current&&current->next)
        {
            ListNode* front=current->next;
            if(current->val==front->val)
            {
                current->next=front->next;
                delete front;
            }
            else
            current=current->next;


        }
        return head;

        
    }
};