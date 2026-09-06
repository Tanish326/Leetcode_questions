class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
         unordered_map<int,int>mpp;
         for(auto &k : nums1){
            mpp[k[0]] = k[1];
         }
         for(auto &m : nums2){
            if(mpp.find(m[0])!=mpp.end()){
                mpp[m[0]] += m[1];
            }else{
                mpp[m[0]] = m[1];
            }
         }
         vector<vector<int>>ans;
         for(auto &k : mpp){
            ans.push_back({k.first,k.second});
         }
         sort(ans.begin(),ans.end());
         return ans;
        
    }
};