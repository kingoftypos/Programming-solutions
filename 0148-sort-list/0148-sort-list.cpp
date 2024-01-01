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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
       
       ListNode* dummy=new ListNode();
       ListNode* curr=dummy;
       ListNode* temp1=list1;
       ListNode* temp2=list2;
       while(temp1&&temp2)
       {
           if(temp1->val<=temp2->val)
           {
               curr->next=temp1;
               curr=temp1;
               temp1=temp1->next;

           }
           else
           {
               curr->next=temp2;
               curr=temp2;
               temp2=temp2->next;
           }

       }
       while(temp1)
       {
          curr->next=temp1;
               curr=temp1;
               temp1=temp1->next;
       }
       while(temp2)
       {
           curr->next=temp2;
               curr=temp2;
               temp2=temp2->next;
       }
       return dummy->next;
    }
public:
    ListNode* sortList(ListNode* head) {
if( !head || !head->next) return head;


        ListNode* slow=head;
        ListNode* temp=nullptr;
        ListNode* fast=head;
        while(fast&&fast->next)
        {
            temp=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        temp->next=nullptr;


ListNode* lefthead=head;
ListNode* righthead=slow;
lefthead=sortList(lefthead);
righthead=sortList(righthead);
return mergeTwoLists(lefthead,righthead);

        
    }
};