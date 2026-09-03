class Solution {
public:
   bool uniformArray(vector<int>& nums1) {
        sort(nums1.begin(),nums1.end());
        int n = nums1.size();
        int count_even = 0;
        int count_odd = 0;
        for(int i=0;i<n;i++){
            if(nums1[i]%2==0){
                if(count_even > 0){
                    count_even++;
                }else if(count_odd > 0){
                    count_odd++;
                }else{
                    count_even++;
                }
                
            }else{
                if(count_even > 0){
                    return false;
                }else if(count_odd > 0){
                    count_odd++;
                }else{
                    count_odd++;
                }
            }
            
        }
        return true;
    }
};