class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>mpp;
        for(int i=0;i<n;i++){
           mpp[nums[i]]++;
        }
       
        int maxcount = 0;
        for(auto k : mpp){
            int x = k.first - 1;
             int count = 0;
            if(mpp.find(x)==mpp.end()){
                x = k.first;
                while(mpp.find(x)!=mpp.end()){
                    x = x + 1;
                    count = count + 1;
                }
            }
            maxcount = max(maxcount,count);
        }
        return maxcount;
    }
};