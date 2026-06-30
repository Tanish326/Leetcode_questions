class Solution {
public:
    int majorityElement(vector<int>& nums) {
         int n = nums.size();
         int val = nums[0];
         int count = 1;
         for(int i=0;i<n;i++){
            if(val==nums[i]){
                count++;
            }else{
                count--;
                if(count==0){
                    count = 1;
                    val = nums[i];
                }
            }
         }
         return val;
    }
};