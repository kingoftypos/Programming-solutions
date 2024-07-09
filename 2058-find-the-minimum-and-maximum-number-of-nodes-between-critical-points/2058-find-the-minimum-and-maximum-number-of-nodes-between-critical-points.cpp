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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> critic;
        ListNode* prev=head;
        ListNode *temp=head->next;
        int count=2;
        while(temp->next)
        {
            ListNode* front=temp->next;
            if((front->val>temp->val && prev->val>temp->val) ||
            (front->val<temp->val && prev->val<temp->val))
            critic.push_back(count);
            prev=temp;
            temp=front;
            count++;
        }
        
        int n=critic.size();
        int mini=(n>=2)?critic[n-1]-critic[n-2]:-1;
        for(int i=1;i<n;i++)
        {
            mini=min(critic[i]-critic[i-1],mini);
        }
        int maxi=(n>=2)?critic[n-1]-critic[0]:-1;
        return {mini,maxi};

        
    }
};