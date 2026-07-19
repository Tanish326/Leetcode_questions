class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size();
        int l = 0;
        int h = n-1;
     
        int ans = 0;
        while(l<=h){
            int mid = l + (h-l)/2;
            int val = arr[mid]-(mid+1);
            if(val<k){
            
                l = mid + 1;

            }else{
                h = mid-1;
            }
        }
        return l + k;
    }
};








