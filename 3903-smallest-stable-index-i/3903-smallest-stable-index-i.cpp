class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        int maxelem = 0;
        int minelem = 1e9;
        for(int i=0;i<n;i++){
            maxelem = *max_element(nums.begin(),nums.begin()+i);
            minelem = *min_element(nums.begin()+i,nums.end());
            if((maxelem-minelem)<=k){
                return i;
            }
        }
        return -1;
    }
};