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
    ListNode* doubleIt(ListNode* head) {
        ListNode* head1 = reverse(head);
        ListNode* temp = head1;
        ListNode* head2 = NULL;
        int carry = 0;
        while(temp){
            temp->val = temp->val*2 + carry;
            carry = temp->val/10;
            temp->val  = temp->val%10;
            head2 = temp;
            temp = temp->next;
        }
        if(carry){
            head2->next = new ListNode(carry);
            head2 = head2->next;
        }
        return reverse(head1); 
    }
};