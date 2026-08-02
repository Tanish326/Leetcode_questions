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
    ListNode* find_mid(ListNode* head){
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
            ListNode* node = head->next;
            head->next = prev;
            prev = head;
            head = node;
        }
        return prev;
    }
    void reorderList(ListNode* head) {
          if(!head || !head->next){
            return;
          }
          ListNode* mid = find_mid(head);
          ListNode* head1 = reverse(mid->next);
          mid->next = NULL;
          ListNode* temp = head;
          ListNode* temp1 = head1;
         while(temp && temp1){
            ListNode* t = temp->next;
            ListNode* b = temp1->next;
             temp->next = temp1;
             temp1->next = t;
              temp = t;
              temp1 = b;
             
         }
       
    }
};