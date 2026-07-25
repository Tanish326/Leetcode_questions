class Solution {
public:
    vector<long long> getDistances(vector<int>& arr) {
       
        int n = arr.size();
         vector<long long>ans(n);
        unordered_map<long long,vector<long long>>mpp;
        for(int i=0;i<n;i++){
            mpp[arr[i]].push_back(i);

        }
        for(auto &it : mpp){
            
            vector<long long>temp = it.second;
            long long m = temp.size();
            vector<long long>pref(m);
            pref[0] = temp[0];
            for(int i=1;i<m;i++){
                 pref[i] = pref[i-1] + temp[i];
            }
            long long total = pref[m-1];
            for(int i=0;i<m;i++){
                long long left = 1LL*i*temp[i];
                if(i>0){
                    left = left - pref[i-1];
                }
                long long right = 1LL*(total - pref[i] -((m-i-1)*temp[i]));
                ans[temp[i]] = right + left;

            }
        }
        return ans;
    }
};