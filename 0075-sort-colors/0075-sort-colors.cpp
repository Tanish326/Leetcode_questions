class Solution {
public:
    void swap(int *a, int *b){
        int t = *a;
        *a = *b;
        *b = t;
    }
    void sortColors(vector<int>& nums) {
        int n = nums.size();
         int low = 0;
         int med = 0;
         int high = n-1;
         while(med<=high && low<=med){
            if(nums[med]==0){
                swap(&nums[low],&nums[med]);
                low++;
                med++;
            }else if(nums[med]==2){
                swap(&nums[med],&nums[high]);
                high--;
            }else{
                med++;
            }
         }
        
    }
};