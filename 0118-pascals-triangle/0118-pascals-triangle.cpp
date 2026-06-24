class Solution {
public:
    vector<int>generaterow(int row){
        vector<int>temp;
        long long ans = 1;
        temp.push_back(1);
        for(int i=1;i<row;i++){
            ans = ans*(row-i);
            ans = ans/i;
            temp.push_back(ans);
        }
        return temp;
    }
    vector<vector<int>> generate(int numRows) {
          vector<vector<int>>ans;
          
          for(int i=0;i<numRows;i++){
            vector<int>temp = generaterow(i+1);
            ans.push_back(temp);

          }
          return ans;

    }
};