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
    ListNode* reverse(ListNode* low,ListNode* high)
    {
        ListNode* temp=low;
        ListNode* prev=nullptr;
        while(temp)
        {
            ListNode* front=temp->next;
            temp->next=prev;
            prev=temp;
            temp=front;
        }
        return prev;

    }
public:

         ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (!head || left == right) return head;

        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* pre = dummy;

        for (int i = 0; i < left-1; i++) {
            pre = pre->next;
        }

        ListNode* low = pre->next;
        ListNode* high = low;

        for (int i = 0; i < right - left; ++i) {
            high = high->next;
        }

        ListNode* nextNode = high->next;
        high->next = nullptr;

        pre->next = reverse(low, high);
        low->next = nextNode;

        ListNode* result = dummy->next;
        delete dummy; 
        return result;
    }
       
    
};