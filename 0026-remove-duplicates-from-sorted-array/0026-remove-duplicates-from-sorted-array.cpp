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
         int j = 0;
         while(j<n){
            if(nums[j]!=nums[i]){
                swap(&nums[i+1],&nums[j]);
                i++;
            }
            j++;
         }
         return i+1;

    }
};