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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {       
        ListNode* temp = head->next;
        if(!temp->next){
            return {-1,-1};
        }
        ListNode* prev = head;
        int count = 0;
        int ind = 2;
        int prevind = -1;
        int maxdist = 0;
        int mindist = 1e9;
        int firstind = -1;
        while(temp->next){
            if(temp->val>prev->val && temp->val>temp->next->val){
                count++;
                if(prevind==-1){
                    prevind = ind;
                }else{
                    mindist = min(mindist,abs(ind-prevind));
                    prevind = ind;

                }
                if(firstind==-1){
                    firstind = ind;
                }

              
            }
            else if(temp->val<prev->val && temp->val<temp->next->val){
                count++;
                  if(prevind==-1){
                    prevind = ind;
                }else{
                    mindist = min(mindist,abs(ind-prevind));
                    prevind = ind;

                }
                if(firstind==-1){
                    firstind = ind;
                }

            }
            
            prev = temp;
            temp = temp->next;
            ind++;
    
        }
        if(count<2){
            return {-1,-1};
        }
        maxdist = max(maxdist,abs(prevind-firstind));
       return {mindist,maxdist};
        
    }
};