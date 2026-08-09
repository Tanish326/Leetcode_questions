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
    int getDecimalValue(ListNode* head) {
        ListNode* newhead = reverse(head);
        int sum = 0;
        ListNode* temp = newhead;
        int i = 0;
         while(temp){
            sum = sum + pow(2,i)*(temp->val);
            i++;
            temp = temp->next;
         }
       return sum;
    }
};