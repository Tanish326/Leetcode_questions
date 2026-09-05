class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
          int n = nums.size();
        int minelem = nums[n-1];
        vector<int>nextsmall(n);
        nextsmall[n-1] = nums[n-1];
        for(int i=n-2;i>=0;i--){
            if(nums[i]<minelem){
                minelem = nums[i];
              }
            nextsmall[i] = minelem;
        }
        int maxelem = nums[0];
        if(maxelem-nextsmall[0]<=k){
            return 0;
        }
        int ind = -1;
        for(int i=1;i<n;i++){
            if(nums[i]>maxelem){
                maxelem = nums[i];
            }
            if((maxelem - nextsmall[i])<=k){
                ind = i;
                break;
            }
        }
        if(ind==-1){
            return ind;
        }
        return ind;
    }
};