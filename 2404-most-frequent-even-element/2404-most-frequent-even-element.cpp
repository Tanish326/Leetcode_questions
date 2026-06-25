class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int,int>mpp;
        int maxlen = -1e9;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
               int c = mpp[nums[i]]++;
               maxlen = max(maxlen,c);
            }
        }
          int freq = -1e9;
          int ans = -1;
          for(auto k : mpp){
               if(k.second>freq){
                ans = k.first;
                freq = k.second;
               }
          }
        return ans;
    }
};