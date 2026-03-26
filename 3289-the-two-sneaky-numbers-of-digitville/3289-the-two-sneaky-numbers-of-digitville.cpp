class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        map<int,int>mpp;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
if(mpp.find(nums[i])!=mpp.end()){
    ans.push_back(nums[i]);
}else{
    mpp[nums[i]] = i;
}

        }
        return ans;
    }
};