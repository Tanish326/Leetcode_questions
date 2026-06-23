class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n==0){
            return 0;
        }
        unordered_set<int>st;
        for(int i=0;i<n;i++){
            st.insert(nums[i]);
        }
      int  maxlen = -1e9;
        for(int k : st){
            int x;
            int count = 0;
             if(st.find(k-1)==st.end()){
                x = k;
                count = 1;
             }
             while(st.find(x+1)!=st.end()){
                count++;
                x = x +1;
             }
             maxlen = max(maxlen,count);
        }
        return maxlen;
    }
};