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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        if(!head){
            return NULL;
        }
        
        unordered_map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]] = 1;
        }
        ListNode* temp = head;
        ListNode* prev = NULL;
        while(temp){
            if(mpp.find(temp->val)!=mpp.end()){
                if(prev){
                    prev->next = temp->next;
                    temp = temp->next;
                }else{
                    head = head->next;
                    temp = head;
                }
            }else{
                prev = temp;
                temp = temp->next;
            }

        }
        return head;
        
    }
};