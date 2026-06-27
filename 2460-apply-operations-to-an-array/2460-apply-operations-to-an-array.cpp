class Solution {
public:
        void swap(int *a, int *b){
        int t = *a;
        *a = *b;
        *b = t;
    }
      void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        int j = 0;
        while(j<n){
            if(nums[j]!=0){
               swap(&nums[i],&nums[j]);
                i++;
            }
            j++;

        }

    }
    vector<int> applyOperations(vector<int>& nums) {
        int n = nums.size();
          int i = 0;
          int j = i+1;
          while(j<n){
            if(nums[i]==nums[j]){
                nums[i] = nums[i]*2;
                nums[j] = 0;
            }
            i++;
            j++;
          }
       moveZeroes(nums);
       return nums;

    }
};