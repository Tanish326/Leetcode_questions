class Solution {
public:
   int check(vector<int>&nums,int val){
    int count = 0;
    for(int i=0;i<nums.size();i++){
        count = count + ceil((double)nums[i]/val);
    }
    return count;
   }
    int minimizedMaximum(int n, vector<int>& quantities) {
        int l = 1;
        int h = quantities[0];
        int n1 = quantities.size();
        for(int i=0;i<n1;i++){
            if(quantities[i]>h){
                h = quantities[i];
            }
        }
        int ans;
        while(l<=h){
            int mid = l + (h-l)/2;
            if(check(quantities,mid)<=n){
                ans = mid;
                h = mid-1;

            }else{
                l = mid+1;
            }
        }
        return ans;
    }
};