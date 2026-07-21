class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        int n = nums.size();
        int countpairs = 0;
        int left_pairs = n;
        unordered_map<int,int>mpp;
        for(int i=0;i<n;i++){
            if(mpp.find(nums[i])!=mpp.end()){
                mpp.erase(nums[i]);
                countpairs++;
                left_pairs = left_pairs - 2;
            }else{
                mpp[nums[i]]++;
            }

        }
        return {countpairs,left_pairs};
    }
};