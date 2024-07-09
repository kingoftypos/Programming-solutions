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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* dummy= new ListNode();
        ListNode* curr=dummy;
        ListNode* temp=head;
        int sum=0;
        while(temp)
        {
            if(!temp->val)
            {
                if(sum)
                {
                    ListNode* nn=new ListNode(sum);
                    curr->next=nn;
                    curr=nn;
                }
                sum=0;
            }
            else
            {
                sum+=temp->val;
            }
            temp=temp->next;
        }
        return dummy->next;

        
    }
};