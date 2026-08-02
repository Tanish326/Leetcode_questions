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
    ListNode* removeElements(ListNode* head, int val) {
        if(!head){
            return NULL;
        }
        if(!head->next){
            if(head->val==val){
                return NULL;
            }else{
                return head;
            }
        }
        ListNode* temp = head;
        ListNode* prev = NULL;
        while(temp){
            if(temp->val==val){
                if(prev){
                    prev->next = temp->next;
                    temp = temp->next;
                }else{
                    head = head->next;
                    temp = head;
                }
            }else{
                prev = temp;
                temp = temp->next;
            }
        }
        return head;

    }
};