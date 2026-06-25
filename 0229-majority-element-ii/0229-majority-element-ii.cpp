class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int el1 = -1e9;
        int el2 = -1e9;
        int count1 = 0;
        vector<int>ans;
        int count2 = 0;
        for(int i=0;i<nums.size();i++){
            if(count1==0 && el2!=nums[i]){
                count1 = 1;
                el1 = nums[i];
            }
           else if(count2==0 && el1!=nums[i]){
                count2 = 1;
                el2 = nums[i];
            }else if(el1==nums[i]){
                count1++;
            }else if(el2==nums[i]){
                count2++;
            }else{
                count1--;
                count2--;
            }
        }
    
       count1 = 0;
       count2 = 0;
       for(int i=0;i<nums.size();i++){
        if(el1==nums[i]){
            count1++;
        }
        if(el2==nums[i]){
            count2++;
        }
       }
       int n = nums.size();
       int l = (int)n/3 + 1;
       if(count1>=l){
        ans.push_back(el1);
       }
       if(count2>=l){
        ans.push_back(el2);
       }
       return ans;
    }
};