class Solution {
public:
     void swap(int *a,int *b) {
         int t = *a;
         *a = *b;
         *b = t;
     }
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int l = 0;
        int h = n-1;
        int m = 0;
        while(m<=h){
           if(nums[m]==2){
            swap(&nums[m],&nums[h]);
            h--;
           }else if(nums[m]==0){
            swap(&nums[l],&nums[m]);
            l++;
            m++;
           }else if(nums[m]==1){
            m++;
           }
        }

    }
};