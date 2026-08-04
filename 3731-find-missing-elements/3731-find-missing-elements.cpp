class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int maxelem = -1e9;
        int minelem = 1e9;
        unordered_map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>maxelem){
                maxelem = nums[i];
            }
            if(nums[i]<minelem){
                minelem = nums[i];

            }
            mpp[nums[i]] = 1;
        }
        vector<int>ans;
        for(int i=minelem;i <= maxelem;i++){
                  if(mpp.find(i)==mpp.end()){
                    ans.push_back(i);
                  }
        }
        return ans;
    }
};