class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans;
        for(int i=0;i<n;i++){
           if(nums[i]<10){
            ans.push_back(nums[i]);
           }else{
          vector<int>temp;
            while(nums[i]>0){
                temp.push_back(nums[i]%10);
                 nums[i] = nums[i]/10;
            }
            for(int j=temp.size()-1;j>=0;j--){
                ans.push_back(temp[j]);
            }
           }
        }
        return ans;
    }
};