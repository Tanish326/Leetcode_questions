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
    int numComponents(ListNode* head, vector<int>& nums) {
    
        unordered_map<int,int>mpp;
        int n = nums.size();
        for(int i=0;i<n;i++){
            mpp[nums[i]] = 1;
        }
        ListNode* temp = head;
        int components = 0;
        while(temp){
             if(mpp.find(temp->val)!=mpp.end()){
                components++;
                ListNode* test = temp;
                while(test && mpp.find(test->val)!=mpp.end()){
                 mpp.erase(test->val);
                    test = test->next;
                   
                }
                
             }
             temp = temp->next;
             
        }
        return components;
    }
};