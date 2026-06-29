class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count1 = 0;
        int n = nums.size();
        int maxones = -1e9;
        for(int i=0;i<n;i++){
           if(nums[i]==0){
            count1 = 0;
           }else{
            count1++;
           }
           maxones = max(maxones,count1);
        }
        return maxones;
    }
};