class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        int i = 0;
        int j = 0;
        while(i<n && j<n){
            int max_elem = *max_element(nums.begin(),nums.begin()+i+1);
            int min_elem = *min_element(nums.begin()+i,nums.end());
            int value = max_elem - min_elem;
            if(value<=k){
                return i;
            }
            i++;
            j++;
        }
        return -1;
    }
};