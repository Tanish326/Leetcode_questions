/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(!head || !head->next){
            return false;
        }
        ListNode* temp = head;
        while(temp!=NULL){
            if(temp->val==-1e9){
                return true;
            }
            temp->val = -1e9;
            temp = temp->next;
        }
        return false;
    }
};