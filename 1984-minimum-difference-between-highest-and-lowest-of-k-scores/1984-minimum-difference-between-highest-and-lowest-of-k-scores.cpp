class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int i = 0;
        int j = 0;
        int minel = 1e9;
        int mindiff = 1e9;
        int maxel = -1e9;
        while(j<n){
            maxel = max(maxel,nums[j]);
            minel = min(minel,nums[j]);
             if((j-i+1)>k){
                i++;
                minel = nums[i];
             }
            if((j-i+1)==k){
            mindiff = min(mindiff,abs(maxel-minel));
            }
            j++;

        }
        return mindiff;
    }
};