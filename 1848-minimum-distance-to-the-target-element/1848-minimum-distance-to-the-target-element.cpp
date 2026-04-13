class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
          int n = nums.size();
          int mindist = INT_MAX;
          int ind = 0;
          for(int i=0;i<n;i++){
            if(target==nums[i]){
            ind = i;
            mindist = min(mindist,abs(ind-start));
            }}
            return mindist;
          
    }
};