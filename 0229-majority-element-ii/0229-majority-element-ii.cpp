class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int count1 = 0;
        int count2 = 0;
       
        int n = nums.size();
       
        int val1 = -1e9;
        int val2 = -1e9;
        for(int i=0;i<n;i++){
            if(nums[i]==val1){
               count1++;
            }else if( nums[i]==val2){
                count2++;
            }else if(count1==0 && nums[i]!=val2){
                    val1 = nums[i];
                    count1 = 1;
                
            }else if(count2==0 && nums[i]!=val1){
                    val2 = nums[i];
                    count2 = 1;
                }
            else{
                count1--;
                count2--;
            }}
        
        count1=0;
        count2=0;
        for(int i=0;i<n;i++){
            if(val1==nums[i]){
                count1++;
            }
            if(val2==nums[i]){
                count2++;
            }
        }
        vector<int>ans;
        if(count1>n/3){
            ans.push_back(val1);
        }
        if(count2>n/3){
            ans.push_back(val2);
        }
        return ans;
    }
};