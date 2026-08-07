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
    ListNode* findmid(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head->next;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
    ListNode* merge(ListNode* l,ListNode* h){
        
        ListNode* dummy = new ListNode(-1e9);
        ListNode* head = dummy;
        while(l && h){
            if(l->val<h->val){
                head->next = l;
                l = l->next;
            }else{
                head->next = h;
                h = h->next;
            }
            head = head->next;

        }
        while(l){
            head->next = l;
            l = l->next;
            head = head->next;
        }
        while(h){
            head->next = h;
            h = h->next;
            head = head->next;
        }
        return dummy->next;
    }
    ListNode* merge_sort(ListNode* head){
        if(!head || !head->next){
            return head;
        }
        ListNode* midprev = findmid(head);
        ListNode* h = midprev->next;
        ListNode* l = head;
        midprev->next = NULL;
       ListNode* h1 = merge_sort(l);
       ListNode* h2 = merge_sort(h);
       return merge(h1,h2);
    }
    ListNode* sortList(ListNode* head) {
        if(!head || !head->next){
            return head;
        }
        ListNode* midprev = findmid(head);
        ListNode* h = midprev->next;
        midprev->next = NULL;
        ListNode* l = head;
       ListNode* h1 = merge_sort(l);
       ListNode* h2 = merge_sort(h);
       return merge(h1,h2);
    }
};