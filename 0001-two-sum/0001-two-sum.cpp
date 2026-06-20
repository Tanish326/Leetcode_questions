class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
            map<int,int>mpp;
     vector<int>ans(0);
            for(int i=0;i<nums.size();i++){
                if(mpp.find(target-nums[i])!=mpp.end()){ 
                    ans.push_back(i);
                    ans.push_back(mpp[target-nums[i]]);
                    break;
                       
                }
                mpp[nums[i]] = i;
            }
            return ans;
    }
};