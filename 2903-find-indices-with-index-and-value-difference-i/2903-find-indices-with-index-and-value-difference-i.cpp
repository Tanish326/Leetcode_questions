class Solution {
public:
    vector<int> findIndices(vector<int>& nums, int indexDifference, int valueDifference) {
        int n = nums.size();
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                int indiff = abs(i-j);
                int vdiff = abs(nums[i]-nums[j]);
                if(indiff>=indexDifference && vdiff>=valueDifference){
                    return {i,j};
                }
            }
        }
        return {-1,-1};
    }
};