class Solution {
public:
    void swap(int *a,int *b){
      int t = *a;
      *a = *b;
      *b = t;
    }
    int minimumSwaps(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        int j = n-1;
        int c = 0;
        while(i<j){
            while(i<j && nums[i]!=0){
                i++;
            }
            while(j>i && nums[j]==0){
            j--;
            }
           if(nums[i]==0 && nums[j]!=0){
            swap(&nums[i],&nums[j]);
            c++;
           }
           i++;
           j--;

        }
        return c;
    }
};