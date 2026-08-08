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
    ListNode* reverse(ListNode* head){
        ListNode* prev = NULL;
        while(head){
            ListNode* a = head->next;
            head->next = prev;
            prev = head;
            head = a;
        }
        return prev;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode* temp1 = reverse(l1);
        ListNode* temp2 = reverse(l2);
        int carry = 0;
        ListNode* dummy = new ListNode(-1);
        ListNode* curr = dummy;
        while(temp1 || temp2){
            int s = 0;
            if(temp1){
                s = s + temp1->val;
                temp1 = temp1->next;
            }
            if(temp2){
                s = s + temp2->val;
                temp2 = temp2->next;
            }
            s = s + carry;
            curr->next = new ListNode(s%10);
            carry = s/10;
            curr = curr->next;
        }
        if(carry){
            curr->next = new ListNode(carry);
            curr = curr->next;
        }
        return reverse(dummy->next);
    }
};