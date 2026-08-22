class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        int j = 0;
        int count = 0;
        int maxlen = 0;
        while(j<n){
            if(nums[j]==0){
                count++;
            }
            while(count>1){
                if(nums[i]==0){
                count--;}
                i++;
            }
            if(count==1){
                maxlen = max(maxlen,(j-i));
            }
            j++;
        }
        if(count==0){
            return n-1;
        }
        return maxlen;
        
        
    }
};