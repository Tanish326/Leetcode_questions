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
            ListNode* c = head->next;
            head->next = prev;
            prev = head;
            head = c;
        }
        return prev;
    }
    ListNode* findkth(ListNode* head,int k){
         while(head && --k){
            head = head->next;
            

         }
         return head;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head){
            return NULL;
        }
        if(!head->next){
            return head;
        }
        ListNode* temp = head;
        int len = 0;
        while(temp){
            len++;
            temp = temp->next;
        }
        
        k = k%len;
        if(k==0){
            return head;
        }
      ListNode* h1 =  reverse(head);
      ListNode* kthnode = findkth(h1,k);
      ListNode* h2 = kthnode->next;
      kthnode->next = NULL;
      ListNode* h3 = reverse(h1);
      ListNode* h4 = reverse(h2);
      h1->next = h4;



    return h3;

    }
};