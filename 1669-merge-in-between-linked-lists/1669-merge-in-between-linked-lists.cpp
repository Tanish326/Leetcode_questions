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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* temp1 = list1;
        ListNode* st = NULL;
        ListNode* end = NULL;
        ListNode* prev;
        ListNode* pre;
        ListNode* temp2 = list2;
        int ind1 = 0;
        while(temp1){
            if(ind1==a){
                pre = prev;
                st = temp1;
            }
            if(ind1==b){
                end = temp1;
            }
            ind1++;
            prev = temp1;
            temp1 = temp1->next;
           
        }
         
        while(temp2->next){
           temp2 = temp2->next;
        }
        pre->next = list2;
        temp2->next = end->next;
        return list1;
         
    }
};