class Solution {
public:
   static bool cmp(int a, int b){
    return a<b;
   }
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        sort(points.begin(), points.end(), [](vector<int>& a, vector<int>& b){
    return a[0] < b[0];
});
        int maxlen = -1e9;
        int n = points.size();
        for(int i=1;i<n;i++){
     maxlen = max(maxlen,points[i][0]-points[i-1][0]);
        }
        return maxlen;
    }
};