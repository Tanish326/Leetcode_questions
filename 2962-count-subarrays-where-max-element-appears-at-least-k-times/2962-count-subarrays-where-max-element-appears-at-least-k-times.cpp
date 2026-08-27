class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        int maxelem = *max_element(nums.begin(),nums.end());
        long long subarrays = 0;
        int count = 0;
        int i = 0;
        int j = 0;
        while(j<n){
            if(nums[j]==maxelem){
                count++;
            }
            while(i<=j && count>=k){
                subarrays += (long long)n-j;
                if(nums[i]==maxelem){
                    count--;
                }
                i++;



            }
            j++;
        }
        return subarrays;
    }
};