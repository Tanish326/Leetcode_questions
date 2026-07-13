class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n = arr.size();
        if(n==0){
            return {};
        }
        vector<int>ans(arr.begin(),arr.end());
        sort(arr.begin(),arr.end());
        unordered_map<int,int>mpp;
        mpp[arr[0]] = 1;
        for(int i=1;i<n;i++){
            if(mpp.find(arr[i])==mpp.end()){
                mpp[arr[i]] = mpp[arr[i-1]] + 1;
            }
        }
        for(int i=0;i<n;i++){
            if(mpp.find(ans[i])!=mpp.end()){
                ans[i] = mpp[ans[i]];
            }
        }
        return ans;
      
    }
};