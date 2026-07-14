class Solution {
public:
   long long check(vector<int>&nums,int mindist){
    long long balls = 1;
    int last_ball = nums[0];
    for(int i=1;i<nums.size();i++){
        if((nums[i]-last_ball)>=mindist){
            balls++;
            last_ball = nums[i];
        }
    }
    return balls;
   }
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int l = 1;
        int ans;
        int h = *max_element(position.begin(),position.end()) - *min_element(position.begin(),position.end());
        while(l<=h){
            int mid = l + (h-l)/2;
            if(check(position,mid)>=m){
                ans = mid;
                l = mid+1;
            }else{
                h = mid-1;
            }
        }
        return ans;
    }
};