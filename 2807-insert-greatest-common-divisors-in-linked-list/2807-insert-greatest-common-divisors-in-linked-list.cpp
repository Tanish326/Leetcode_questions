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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
           ListNode* temp = head->next;
           ListNode* prev = head;
           while(temp){
            int d = std::gcd(temp->val,prev->val);
            ListNode* newnode = new ListNode(d);
            prev->next = newnode;
            newnode->next = temp;
            prev = temp;
            temp = temp->next;
           }
        return head;
    }
};