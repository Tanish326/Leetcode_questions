class Solution {
public:
    int pivotIndex(vector<int>& nums) {
           int n = nums.size();
        vector<int>leftsum;
        vector<int>rightsum;
     
        leftsum.push_back(0);
        rightsum.push_back(0);
        int s1 = 0;
        int s2 = 0;
        for(int i=1;i<n;i++){
              s1 = s1 + nums[i-1];
              leftsum.push_back(s1);
              s2 = s2 + nums[n-i];
              rightsum.push_back(s2);
        }
        reverse(rightsum.begin(),rightsum.end());
      for(int i=0;i<n;i++){
        if(leftsum[i]==rightsum[i]){
            return i;
        }
      }
      return -1;
    }
};