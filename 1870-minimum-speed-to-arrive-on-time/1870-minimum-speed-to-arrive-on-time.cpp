class Solution {
public:
    double check(vector<int>&nums,int speed){
        int n = nums.size();
        double count = 0;
        for(int i=0;i<n-1;i++){
            count = count + ceil((double)nums[i]/speed);
            
        }
        count = count + (double)nums[n-1]/speed;
        return count;

    }
    int minSpeedOnTime(vector<int>& dist, double hour) {
        int n = dist.size();
        int l = 1;
        int h = 1e7;
        int ans = -1;
        while(l<=h){
            int mid = l + (h-l)/2;
            if(check(dist,mid)<=hour){
                ans = mid;
                h = mid-1;
            }else{
                l = mid+1;
            }
        }
        return ans;
    }
};