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
    int getDecimalValue(ListNode* head) {
        int n=0;
        ListNode* temp=head;
        while(temp)
        {
            n++;
            temp=temp->next;
        }
        int count=n;
        temp=head;
        int num=0;

        for(int i=count;i>0;i--)
        {
            if(temp->val==1)
            num+=pow(2,i-1);
            temp=temp->next;
        }
        return num;

        
    }
};