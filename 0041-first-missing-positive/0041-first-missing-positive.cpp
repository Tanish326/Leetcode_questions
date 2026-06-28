class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        if(n==1){
           if(nums[0]<1 || nums[0]>1){
            return 1;
           }else{
            return n+1;
           }
        }
        unordered_map<int,int>mpp;
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }
        int i = 1;
        
        while(i<=n){
            if(mpp.find(i)==mpp.end()){
                return i;
            }
            i = i+1;
        }
        return n+1;
    }
};