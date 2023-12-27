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
    ListNode* merge(ListNode* a, ListNode* b) {
        ListNode* res = new ListNode();
        ListNode* dummy = res;
        while (a != nullptr && b != nullptr) {
            if (a->val < b->val) {
                res->next = a;
                res = res->next;
                a = a->next;
            } else {
                res->next = b;
                res = res->next;
                b = b->next;
            }
        }
        if (a) res->next = a;
        else res->next = b;
        return dummy->next;
    }

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int n = lists.size();
        if (n == 0) return nullptr;
        
        while (lists.size() > 1) {
            ListNode* head1 = lists[0];
            ListNode* head2 = lists[1];
            
            lists.erase(lists.begin());
            lists.erase(lists.begin());
            
            ListNode* merged = merge(head1, head2);
            lists.push_back(merged);
        }

        return lists[0];
    }
};
