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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* dummy = new ListNode(0);
        ListNode* curr = dummy;
        ListNode* temp = head;
        ListNode* prevzero = NULL;
        int sum = 0;
        while(temp){
            if(prevzero){
                sum = sum + temp->val;
            }
            if(temp->val==0){
                 if(prevzero){
                     temp->val = sum;
                     curr->next = temp;
                     curr = curr->next;
                     sum = 0;
                 }else{
                    prevzero = temp;
                    
                 }
            }
            temp = temp->next;
            
        }
        return dummy->next;

        
    }
};