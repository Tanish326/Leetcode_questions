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
            ListNode* a = head->next;
            head->next = prev;
            prev = head;
            head = a;
        }
        return prev;
    }
    ListNode* findkthnode(ListNode* head,int k){
        int ind = 1;
        while(head){
            if(ind==k){
                return head;
                break;
            }
            ind++;
            head = head->next;
        }
        return NULL;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(k==1){
            return head;
        }
        ListNode* temp = head;
        ListNode* prev = NULL;
        ListNode* newhead;
        while(temp){
            ListNode* kthnode = findkthnode(temp,k);
            if(kthnode==NULL){
                if(prev){
                    prev->next = temp;

                }
                break;
            }
           ListNode* nextnode =  kthnode->next;
           kthnode->next = NULL;
            ListNode* newgrouphead = reverse(temp);
            if(temp==head){
                newhead = kthnode;
            }else{
                prev->next = newgrouphead;
            }
            prev = temp;
            temp = nextnode;
            

        }
        return newhead;
        
    }
};