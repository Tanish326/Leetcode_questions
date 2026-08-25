class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
          unordered_map<int,int>mpp;
          for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
          }
          for(int i=1;i<=101;i++){
            int val = k*i;
            if(mpp.find(val)==mpp.end()){
                return val;
            }
          }
          return 0;
    }
};