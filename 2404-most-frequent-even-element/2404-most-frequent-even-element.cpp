class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int,int>mpp;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]%2==0){
                mpp[nums[i]]++;
            }
        }
        
        int freq = -1;
        int val = -1;
        for(auto k : mpp){
    
            if(k.second>freq){
                freq = k.second;
                val = k.first;
            }
        }
      
        return val;
    }
};