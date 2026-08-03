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
    ListNode* find(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head->next;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
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
    bool isPalindrome(ListNode* head) {
        if(!head){
            return false;
        }
        if(!head->next){
            return true;
        }
        ListNode* midprev = find(head);
        ListNode* temp = midprev->next;
        midprev->next = NULL;
        ListNode* head1 = reverse(temp);
        ListNode* temp1 = head;
        while(temp1 && head1){
            if(temp1->val!=head1->val){
                return false;
            }
            temp1 = temp1->next;
            head1 = head1->next;
        }
         return true;

    }
};