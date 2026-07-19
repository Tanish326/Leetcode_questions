class Solution {
public:
   int check(vector<int>&nums,int mincapacity){
    int capacity = nums[0];
    int days = 1;
    for(int i=1;i<nums.size();i++){
        if((nums[i] + capacity)<=mincapacity){
            capacity = capacity + nums[i];
        }else{
            days++;
            capacity = nums[i];

        }
    }
    return days;
   }
    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        int l = *max_element(weights.begin(),weights.end());
        int h = accumulate(weights.begin(),weights.end(),0);
        int ans = 0;
        while(l<=h){
            int mid = l + (h-l)/2;
            if(check(weights,mid)<=days){
                ans = mid;
                h = mid-1;
            }else{
                l = mid+1;
            }
        }
        return ans;
    }
};