class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
         sort(intervals.begin(), intervals.end(), [](vector<int>& a, vector<int>& b) {
            if (a[0] == b[0]) return a[1] > b[1]; // same start -> bigger end first
            return a[0] < b[0];
        });
        int n = intervals.size();
        int count = 0;
        int bestend = intervals[0][1];
        for(int i=1;i<n;i++){
            if(intervals[i][1]<=bestend){
                count++;
            }else{
                  bestend = intervals[i][1];
                   if(intervals[i][0]==intervals[i-1][0]){
                    count++;
                   }
            }
        }
        return n-count;
    }
};