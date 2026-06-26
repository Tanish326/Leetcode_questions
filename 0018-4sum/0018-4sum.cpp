class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
       set<vector<int>>st;
        sort(nums.begin(),nums.end());
       for(int i=0;i<n;i++){
      
        for(int j=i+1;j<n;j++){
          
            int k = j+1;
            int l = n-1;
            while(k<l){
                long long sum = (long long)nums[i] + nums[j] + nums[k] + nums[l];
                if(sum==target){
                vector<int>temp = {nums[i],nums[j],nums[k],nums[l]};
                st.insert(temp);
            k++;
            l--;
          

                }else if(sum>target){
                    l--;
                }else{
                    k++;
                }
            }

        }
       }
        vector<vector<int>>ans(st.begin(),st.end());
       return ans;
    }
};