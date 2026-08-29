class Solution {
public:
    int longestAlternatingSubarray(vector<int>& nums, int threshold) {
        int n = nums.size();
        int maxlen = 0;
        int st = 0;
        int end = 0;
        for(int i=0;i<n;i++){
            if(nums[i]%2==0 && nums[i]<=threshold){
                st = i;
                end = i;
                int prev = nums[i];
            for(int j=i+1;j<n;j++){
                if((nums[j]%2 != prev%2) && nums[j]<=threshold){
                   end = j;
                   prev = nums[j];

                }else{
                    break;
                }
            }
            maxlen = max(maxlen,(end-st+1));
            
            
            }

        }
        return maxlen;
    }
};