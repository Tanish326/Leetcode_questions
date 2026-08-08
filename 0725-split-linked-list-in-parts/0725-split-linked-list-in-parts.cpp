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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
       
        ListNode* temp = head;
        int len = 0;
        while(temp){
            len++;
            temp = temp->next;
        }
        temp = head;
        int nodes = len/k;
        int extras = len%k;
        vector<ListNode*>ans;
        for(int i=1;i<=k;i++){
            if(!temp){
                ans.push_back(NULL);
                continue;
            }
            ans.push_back(temp);
           int size = nodes;
            if(i>extras){
              size += 0;
            }else{
                size += 1;
            }
            for(int j=1;j<size;j++){
                temp = temp->next;
            }
        
            if(temp){
            ListNode* nextnode = temp->next;
            temp->next = NULL;
            temp = nextnode;
            } 
          

        }
        return ans;
        
    }
};