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
    ListNode* merge(ListNode* head1,ListNode* head2){
        ListNode* dummy = new ListNode(-1e9);
        ListNode* curr = dummy;
        while(head1 && head2){
            if(head1->val<head2->val){
                curr->next = head1;
                head1 = head1->next;
            }else{
                curr->next = head2;
                head2 = head2->next;
            }
            curr = curr->next;
        }
        while(head1){
            curr->next = head1;
            head1 = head1->next;
            curr = curr->next;
        }
        while(head2){
            curr->next = head2;
            head2 = head2->next;
            curr = curr->next;
        }
        return dummy->next;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
       
        
        int n = lists.size();
        if(n==0){
            return NULL;
        }
        if(n==1){
            return lists[0];
        }
        ListNode* newhead;
        for(int i=1;i<n;i++){
            newhead =  merge(lists[i-1],lists[i]);
            lists[i] = newhead;
         
            
        }
        return newhead;
    }
};