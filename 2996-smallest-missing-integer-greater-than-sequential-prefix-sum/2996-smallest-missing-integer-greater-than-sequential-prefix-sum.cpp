class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int n = nums.size();
        if(n==1){
            return nums[0]+1;
        }
        int sum = 0;
     sum = nums[0];
        int maxsum = nums[0];
        unordered_map<int,int>mpp;
        mpp[nums[0]] = 1;
        for(int i=1;i<n;i++){
       
            if(nums[i]==(1+nums[i-1])){
                sum = sum + nums[i];
            }else{
                break;
            }
               maxsum = max(maxsum,sum);
            }
            for(int i=0;i<n;i++){
                mpp[nums[i]] = 1;
            }
          
         
        
         int x = maxsum;
         while(mpp.find(x)!=mpp.end()){
            x = x + 1;
         }
         return x;
    }
};