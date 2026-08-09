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
  ListNode* removeZeroSumSublists(ListNode* head) {

    ListNode* dummy = new ListNode(0);
    dummy->next = head;

    unordered_map<int, ListNode*> mp;

    int prefix = 0;
    ListNode* temp = dummy;

    // First pass:
    // Store the LAST node having each prefix sum
    while (temp) {
        prefix += temp->val;
        mp[prefix] = temp;
        temp = temp->next;
    }

    // Second pass:
    // Jump over zero-sum sublists
    prefix = 0;
    temp = dummy;

    while (temp) {
        prefix += temp->val;

        temp->next = mp[prefix]->next;

        temp = temp->next;
    }

    return dummy->next;
}
};