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
       ListNode* temp = head;
       while(temp){
        ListNode* front = temp->next;
        temp->next = prev;
        prev = temp;
        temp = front;
       }
       return prev;

   }
   ListNode* findmid(ListNode* head){
      ListNode* slow = head;
      ListNode* fast = head->next;
      while(fast->next && fast->next->next){
        slow = slow->next;
        fast = fast->next->next;
      }
      return slow;
   }
    bool isPalindrome(ListNode* head) {
     if(!head || !head->next){
        return true;
     }
     ListNode* mid = findmid(head);
     ListNode* temp1 = head;
     ListNode* temp2 = reverse(mid->next);
     mid->next = NULL;
     while(temp1 && temp2){
        if(temp1->val!=temp2->val){
            return false;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
     }
     return true;

        
    }
};