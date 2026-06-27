class Solution {
public:
    void swap(int *a,int *b){
        int t = *a;
        *a = *b;
        *b = t;
    }
    int removeDuplicates(vector<int>& nums) {
      int n = nums.size();
      int i = 0;
      int j = i+1;
      while(i<j && j<n){
        if(nums[i]==nums[j]){
            j++;
        }else if(nums[i]!=nums[j]){
            swap(&nums[i+1],&nums[j]);
            i++;
            j++;
        }
      }
      return i+1;
    }
};  