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
            ListNode* temp = head->next;
            head->next = prev;
            prev = head;
            head = temp;
        }
        return prev;
    }
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left==right){
            return head;
        }
        ListNode* node = head;
        int ind1 = 1;
        ListNode* pre = NULL;
        ListNode* prev;
        ListNode* temp2;
        ListNode* temp1;
        while(node){
            if(ind1==left){
               prev = pre;
               temp1 = node;
               }
            if(ind1==right){
                temp2 = node;
            }
            ind1++;
            pre = node;
            node = node->next;
        }
       if(temp1==head){
          if(!temp2->next){
            return reverse(temp1);
          }else{
            ListNode* temp = temp1;
            ListNode* p = temp2->next;
             while(temp!=temp2){
                 ListNode* n = temp->next;
                 temp->next = p;
                 p = temp;
                 temp = n;
             }
             temp->next = p;
             return temp;
          }
       }else{
             if(!temp2->next){
               prev->next = reverse(temp1);
               return head;
             }else{
                ListNode* a = temp2->next;
                ListNode* temp = temp1;
                while(temp!=temp2){
                    ListNode* f = temp->next;
                    temp->next = a;
                    a = temp;
                    temp = f;

                }
                temp->next = a;
                prev->next = temp;
                return head;
             }
       
       }
       return NULL;

    }
};