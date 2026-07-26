class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int,int>first;
        unordered_map<int,int>last;
        unordered_map<int,int>freq;
        int deg = 0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(first.find(nums[i])==first.end()){
                first[nums[i]] = i;
            }
            last[nums[i]] = i;
            deg = max(deg,++freq[nums[i]]);
        }
        int minlen = 1e9;
        for(auto &k :freq){
            if(k.second==deg){
                minlen = min(minlen,last[k.first]-first[k.first]+1);
            }
        }
        return minlen;
    }
};