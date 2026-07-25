class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 1;
        int n = nums.size();
        int val = nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]==val){
                count++;
            }else{
                count--;
                if(count==0){
                    val = nums[i];
                    count = 1;
                }
            }}
            
        if(count>0){
            return val;
        }
        return -1;
    }
};