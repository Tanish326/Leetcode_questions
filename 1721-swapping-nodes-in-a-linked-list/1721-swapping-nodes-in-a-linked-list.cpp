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
    ListNode* swapNodes(ListNode* head, int k) {
        if(!head->next){
            return head;
        }
        ListNode* temp = head;
        int len = 1;
        ListNode* node1 = NULL;
        while(temp!=NULL){
            if(len==k){
                node1 = temp;
            }
            len++;
            temp = temp->next;
        }
        int ind2 = len-k;
        int count = 1;
        ListNode* temp1 = head;
        ListNode* node2 = NULL;
        while(temp1!=NULL){
            if(count==ind2){
                node2 = temp1;
                break;
            }
            count++;
          temp1 = temp1->next;
        }
        int a = node1->val;
        node1->val = node2->val;
        node2->val = a;

        return head;
    }
};