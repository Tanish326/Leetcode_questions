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
        
        ListNode* temp = reverse(head);
        ListNode* newhead = temp;
        int carry = 0;
        ListNode* prev;
         while(temp){
            int s = 0;
            s = s + temp->val*2 + carry;
            temp->val = s%10;
            carry = s/10;
            prev = temp;
            temp = temp->next;
        }
        
        if(carry){
            prev->next = new ListNode(carry);
            prev = prev->next;
        }
        return reverse(newhead);

        
    }
};