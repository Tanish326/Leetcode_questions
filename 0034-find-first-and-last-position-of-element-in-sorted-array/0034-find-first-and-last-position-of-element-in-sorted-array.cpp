class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n =nums.size();
   int lower = n;
   int upper = n;
   int l1=0,l2=0,h1=n-1,h2=n-1;
   while(l1<=h1){
    int mid = (l1+h1)/2;
    if(nums[mid]>=target){
        lower = mid;
        h1 = mid-1;
    }else{
        l1 = mid+1;
    }
   }
    while(l2<=h2){
    int mid = (l2+h2)/2;
    if(nums[mid]>target){
        upper = mid;
        h2 = mid-1;
    }else{
        l2 = mid+1;
    }
   }
if(lower==n || nums[lower]!=target){
    return {-1,-1};
    
}
return {lower,upper-1};
    }
};