class Solution {
public:
    int findLHS(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>mpp;
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }
        int maxlen = 0;
        for(auto &it : mpp){
              int x = it.first + 1;
              if(mpp.find(x)!=mpp.end()){
                int count = mpp[it.first] + mpp[x];
                maxlen = max(maxlen,count);
              }


        }
        return maxlen;
    }
};