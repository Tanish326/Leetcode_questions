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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(!head || !head->next){
            return NULL;
        }
        int len = 1;
        ListNode* temp = head;
        while(temp!=NULL){
            len++;
            temp = temp->next;

        }
        int target = len-n;
        ListNode* prev = NULL;
        int count = 1;
        ListNode* temp1 = head;
        if(target==1){
            return head->next;
        }
        while(temp1!=NULL){
            if(target==count){
                prev->next = temp1->next;
            }
            prev = temp1;
            count++;
            temp1 = temp1->next;
        }
        return head;
    }
};