class Solution {
public:
    void swap(int *a, int *b){
        int temp = *a;
        *a = *b;
        *b = temp;
    }
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        int j = 0;
        while(j<n){
          if(nums[i]!=nums[j]){
            swap(&nums[i+1],&nums[j]);
            i++;

          }
          j++;

        }
        return i+1;
    }
};