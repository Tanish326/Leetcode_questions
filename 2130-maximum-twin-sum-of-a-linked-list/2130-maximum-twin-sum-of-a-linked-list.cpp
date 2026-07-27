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
    int pairSum(ListNode* head) {
        if(head->next->next==NULL){
            return head->val + head->next->val;
        }
          ListNode* slow = head;
          ListNode* fast = head;
          ListNode* pre = NULL;
          while(fast!=NULL && fast->next!=NULL){
            pre = slow;
            slow = slow->next;
            fast = fast->next->next;
          }
          ListNode* curr = slow;
     
          ListNode* prev = NULL;
          while(curr!=NULL){
            ListNode* temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;

          }
          ListNode* head1 = head;
          ListNode* head2 = prev;
          int maxval = -1e9;
          while(head1!=slow && head2!=NULL){
               maxval = max(maxval,(head1->val + head2->val));
               head1 = head1->next;
               head2 = head2->next;
          }
          return maxval;
    }
};