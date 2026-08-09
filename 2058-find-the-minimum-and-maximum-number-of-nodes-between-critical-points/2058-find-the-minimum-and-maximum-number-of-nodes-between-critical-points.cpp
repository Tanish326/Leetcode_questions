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
        ListNode* prev = head;
        ListNode* temp = head->next;
        if(!temp->next){
            return {-1,-1};

        }
        vector<int>ans;
        int ind = 2;
        while(temp){
            if( temp->next && prev->val<temp->val && temp->next->val < temp->val){
              ans.push_back(ind);

            }
             if( temp->next && prev->val > temp->val && temp->next->val > temp->val){
                ans.push_back(ind);
            }
            ind++;
            prev = temp;
            temp = temp->next;
        }
         int n = ans.size();
        if(n==0 || n==1){
            return {-1,-1};
        }
        int maxdist = -1e9;
        int mindist = 1e9;
       for(int i=1;i<n;i++){
        maxdist = max(maxdist,ans[i]-ans[0]);
        mindist = min(mindist,ans[i]-ans[i-1]);
       
       }
     vector<int>a;
        a.push_back(mindist);
        a.push_back(maxdist);
        return a;
       
    
    } 
};