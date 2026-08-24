class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n = nums.size();
        int k = 0;
        int minswaps = 1e9;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                k++;
            }
        }
        int i = 0;
        int j = 0;
        int count = 0;
        while(j<(2*n)){
            if(nums[j%n]==0){
                count++;
            }
            while(i<2*n && (j-i+1)>k){
                if(nums[i%n]==0){
                    count--;
                }
                i++;
            }
            if((j-i+1)==k){
                minswaps = min(minswaps,count);
            }
            j++;
        }
        return minswaps;
    }
};