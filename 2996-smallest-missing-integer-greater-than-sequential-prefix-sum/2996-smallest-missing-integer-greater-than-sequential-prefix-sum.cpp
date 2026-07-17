class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int n = nums.size();
        int pref = nums[0];
        unordered_map<int,int>mpp;

        for(int i=1;i<n;i++){
            if(nums[i]==(nums[i-1]+1)){
                pref = pref + nums[i];

            }else{
                break;
            }
          
        }
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }
       
         while(mpp.find(pref)!=mpp.end()){
            pref = pref + 1;
         }
        
         return pref;
    }
};