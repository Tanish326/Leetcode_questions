class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
          int n = nums.size();
          int i = 0;
          int j = 0;
          vector<int>ans;
          long long sum = 0;
       
          while(j<n){
            sum = (long long)(sum + nums[j]);
            if((j<k)){
                ans.push_back(-1);
            }
            while(i<n && (j-i+1) > (2*k+1)){
                sum = sum - nums[i];
                i++;
            }
            if((j-i+1)==(2*k + 1)){
                ans.push_back((sum)/(2*k + 1));
            }
            j++;
            

          }

           int m = ans.size()-1;
           while(m<n-1){
             ans.push_back(-1);
             m++;
           }
          return ans;
    }
};