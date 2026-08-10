class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int>mpp;
        int count = 0;
        for(int i=0;i<n;i++){
            if(mpp.find(k-nums[i])!=mpp.end()){
                count++;
                mpp[k-nums[i]]--;
                if(mpp[k-nums[i]]==0){
                    mpp.erase(k-nums[i]);
                }
                
            }else{
                mpp[nums[i]]++;
            }
        }
        return count;
    }
};