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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left==right){
            return head;
        }
        ListNode* previous = NULL;
        ListNode* temp = head;
        ListNode* temp1 = head;
        if(left==1){
            int ind = 1;
            while(temp1!=NULL){
                if(ind==right){
                    break;
                }
                ind++;
               temp1 = temp1->next;
            }
        }else{
            int ind1 = 1;
            int ind2 = 1;
            while(temp!=NULL){
                if(ind1==left){
                    break;
                }
                ind1++;
                previous = temp;
                temp = temp->next;
            }
            while(temp1!=NULL){
                if(ind2==right){
                    break;
                }
                ind2++;
                temp1 = temp1->next;
            }
        }
     
        ListNode* pre = NULL;
        if(temp1->next!=NULL){
           pre = temp1->next;
        }
        ListNode* curr = temp;
        
        while(curr!=temp1){
            ListNode* a = curr->next;
            curr->next = pre;
            pre = curr;
            curr = a;
        }
        curr->next = pre;
     
      if(previous){
    previous->next = curr;
}
        if(previous==NULL){
            return curr;
        }
        
        
        return head;

        
        
    }
};