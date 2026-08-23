class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int i = 0;
        if(n==1){
            return 0;
        }
        int j = 0;
        int mindiff = 1e9;
        while(j<n){
            while((j-i+1)>k){
                i++;
            }
            int diff = nums[j]-nums[i];
            if((j-i+1)==k){
                mindiff = min(mindiff,diff);
            }
            j++;
        }
        return mindiff;
    }
};