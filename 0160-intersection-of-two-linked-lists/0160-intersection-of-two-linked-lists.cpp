/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* t1=headA;
        ListNode* t2=headB;
        if(!headA||!headB)return NULL;
        if(t2==t1)return t1;
        while(t1!=t2)
        {
            
            
            
            if(!t1)t1=headB;
            if(!t2)t2=headA;
            if(t1==t2)return t1;
            t1=t1->next;
            t2=t2->next;
        }
        return t1;
        
        
    }
};