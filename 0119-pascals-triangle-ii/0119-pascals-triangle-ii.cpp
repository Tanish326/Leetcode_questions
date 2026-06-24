class Solution {
public:
    vector<int> getRow(int rowIndex) {
       vector<int>a;
       int r = rowIndex+1;
       long long ans = 1;
       a.push_back(1);
       for(int i=1;i<r;i++){
         ans = ans*(r-i);
         ans = ans/i;
         a.push_back(ans);
       }
       return a;
    }
};