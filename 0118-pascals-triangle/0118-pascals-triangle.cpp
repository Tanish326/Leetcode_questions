class Solution {
public:
     vector<int>generaterow(int r){
        int ans = 1;
        vector<int>a;
        a.push_back(1);
        
        for(int i=1;i<=r;i++){
            ans = ans*(r-i+1)/i;
            a.push_back(ans);
        }
        return a;
     }
    vector<vector<int>> generate(int numRows) {
        int n = numRows;
        vector<vector<int>>ans;
        ans.push_back({1});
        for(int i=1;i<n;i++){
          vector<int>temp =  generaterow(i);
          ans.push_back(temp);
        }
        return ans;
    }
};