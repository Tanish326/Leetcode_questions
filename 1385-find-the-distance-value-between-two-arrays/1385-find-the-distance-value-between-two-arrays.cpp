class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int n = arr1.size();
        int m = arr2.size();
        int count = 0;
        for(int i=0;i<n;i++){
            bool a = false;
            int v = arr1[i];
            for(int j=0;j<m;j++){
                if(abs(v - arr2[j])<=d){
                    a = true;
                }
            }
            if(!a){
                count++;
            }
        }
        return count;
    }
};