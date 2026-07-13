class Solution {
public:
    int check(vector<int>&nums,int capacity){
       int day = 1;
       int load = 0;
       for(int i=0;i<nums.size();i++){
        if((nums[i] + load)<=capacity){
            load = load + nums[i];
        }else{
            load = nums[i];
            day++;
             
        }
       }
       return day;
        
          

    }
    int shipWithinDays(vector<int>& weights, int days) {
        int l = *max_element(weights.begin(),weights.end());
        int h = 0;
        for(int i=0;i<weights.size();i++){
            h = h + weights[i];
        }
        int ans;
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