class Solution {
public:
    
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int ind = -1;
        if(n==1){
            return;
        }
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                ind = i;
                break;
            }

        }
        if(ind==-1){
            reverse(nums.begin(),nums.end());
            return;
        }
        int l = ind;
        int r = n-1;
        while(l>=0 && r>ind){
            if(nums[l]<nums[r]){
              int t = nums[l];
              nums[l] = nums[r];
              nums[r] = t;
                break;
            }else{
                r--;
            }
           

        }
        reverse(nums.begin()+ind+1,nums.end());
        return;
    }
};