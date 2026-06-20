class Solution {
public:
    void swap(int *a,int *b){
        int temp = *a;
        *a = *b;
        *b = temp;
    }
    void moveZeroes(vector<int>& nums) {
            int n = nums.size();
            int i = 0;
            int j = i+1;
            while(i<j && j<n){
               if(nums[i]==0 && nums[j]!=0){
                swap(&nums[i],&nums[j]);
                i++;
                j++;
               }
               else if((nums[j]==0&& nums[i]!=0 )||(nums[i]!=0 && nums[j]!=0)){
                i++;
                j++;
               }else{
                j++;
               }
               
            }
            
    }
};