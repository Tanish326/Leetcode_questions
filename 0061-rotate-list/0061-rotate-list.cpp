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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next){
            return head;
        }
        ListNode* tail = head;
        int len = 1;
        while(tail->next){
            len++;
            tail = tail->next;
        }
        k = k%len;
        tail->next = head;
        ListNode* newhead = tail->next;
        int target = len-k;
        ListNode* temp = newhead;
        int count = 1;
        while(temp){
            if(count==target){
                break;
            }
            count++;
            temp = temp->next;
        }
        newhead = temp->next;
        temp->next = NULL;
        return newhead;





    }
};