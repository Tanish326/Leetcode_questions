class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n = nums.size();
        vector<int>vec(n,0);
        int even_ind = 0;
        int odd_ind = 1;
        for(int i=0;i<n;i++){
            if(nums[i]%2==0){
                vec[even_ind] = nums[i];
                even_ind += 2;
            }else{
                vec[odd_ind] = nums[i];
                odd_ind += 2;
            }
        }

        return vec;
    }
};