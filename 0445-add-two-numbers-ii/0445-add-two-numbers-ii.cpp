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
        if(!l1 && l2){
            return l2;

        }
        if(!l2 && l1){
            return l1;
        }
        ListNode* dummy = new ListNode(-1);
        ListNode* head1 = reverse(l1);
        ListNode* head2 = reverse(l2);
        ListNode* head = dummy;
        int carry = 0;
        while(head1 || head2){
            int sum = carry;
            if(head1){
                sum = sum + head1->val;
                head1 = head1->next;
            }
            if(head2){
                sum = sum + head2->val;
                head2 = head2->next;

            }
            carry = sum/10;
            head->next = new ListNode(sum%10);
            head = head->next;
        }
     if(carry){
        head->next = new ListNode(carry);
     }
    return reverse(dummy->next);

        
    }
};