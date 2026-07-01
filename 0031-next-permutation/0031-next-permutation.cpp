class Solution {
public:
    void swap(int *a, int *b){
        int  t = *a;
        *a = *b;
        *b = t;
    }
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        //break point
        int ind = -1;
        for(int i=n-2;i>=0;i--){
            if(nums[i+1]>nums[i]){
                ind = i;
                break;
            }
        }
        //no break point means last permutation so we reverse the array
        if(ind==-1){
            reverse(nums.begin(),nums.end());
            return;
        }
        bool flag = false;
       for(int i=ind;i>=0;i--){
        for(int j=n-1;j>=ind;j--){
            if(nums[j]>nums[i]){
                flag = true;
                swap(&nums[i],&nums[j]);
                break;
            }
            
        }
        if(flag){
            break;
        }
       }
            reverse(nums.begin()+ind+1,nums.end());
    }
};