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
    ListNode* findnode(ListNode* head,int len)
    {
        ListNode* temp=head;
        len--;
        while(len--&&temp->next)
        {
            temp=temp->next;
        }
        return temp;
    }
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head||!head->next)return head;
        ListNode* tail=head;
        int len=1;
        while(tail->next)
        {
            tail=tail->next;
            len++;
        }
        k=k%len;
        if(k==0)return head;
        ListNode* lastnode=findnode(head,len-k);
        tail->next=head;
        head=lastnode->next;
        lastnode->next=nullptr;
        return head;
        
    }
};