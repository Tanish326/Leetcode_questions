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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        ListNode* dummy = new ListNode(-1);
        ListNode* curr = dummy;
        while(temp1 || temp2 || carry){
            int s = 0;
            if(temp1){
                s += temp1->val;
                temp1 = temp1->next;
           
            }
            if(temp2){
                s += temp2->val;
                temp2 = temp2->next;
            }
            s += carry;
            curr->next = new ListNode(s%10);
            curr = curr->next;
            
            carry = s/10;
            
           
        }
        if(carry){
            curr->next = new ListNode(carry);
            curr = curr->next;

        }
        return dummy->next;

    }
};