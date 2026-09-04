class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int,int>mpp;
        int count = 0;
        for(int i=0;i<n;i++){
            mpp[arr[i]] = i;
            if(arr[i]==0){
                count++;
            }
        }
        if(count>=2){
            return true;
        }
        for(auto &k : mpp){
            int v = k.first;
            int ind = k.second;
            if(mpp.find(2*v)!=mpp.end()){
                if(mpp[2*v]!=ind){
                    return true;
                }
            }
        }
        return false;
    }
};