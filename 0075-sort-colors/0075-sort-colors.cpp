class Solution {
public:
    void swap(int *a, int *b){
        int temp = *a;
        *a = *b;
        *b = temp;
    }
    void sortColors(vector<int>& nums) {
        int n = nums.size();
         int low = 0;
         int medium = 0;
         int high = n-1;
         while(low<=high && medium<=high && high>=0){
            if(nums[medium]==0){
                swap(&nums[low],&nums[medium]);
                low++;
                medium++;
            
            }else if(nums[medium]==2){
                swap(&nums[high],&nums[medium]);
                high--;
                
            }else{
                medium++;
            }
            
           
         }

    }
};