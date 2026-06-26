class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), [](const vector<int>& a, const vector<int>& b) {
    return a[0] < b[0];
});
     vector<vector<int>>ans;
     int n = intervals.size();
     
    
    for(int i=0;i<n;i++){
      if(ans.empty() || ans.back()[1]<intervals[i][0]){
        ans.push_back({intervals[i][0],intervals[i][1]});
      }else{
        ans.back()[1] = max(ans.back()[1],intervals[i][1]);
      }
    }
    return ans;
    }};