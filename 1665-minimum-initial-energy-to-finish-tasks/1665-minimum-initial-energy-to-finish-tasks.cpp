class Solution {
public:
   bool static cmp(vector<int>&a, vector<int>&b){
       return abs(a[0]-a[1]) > abs(b[0]-b[1]);

   }
    int minimumEffort(vector<vector<int>>& tasks) {
        int energy = tasks[0][1];
        int ans = energy;
        sort(tasks.begin(),tasks.end(),cmp);
        for(int i=0;i<tasks.size();i++){
            if(energy<tasks[i][1]){
                int temp = tasks[i][1] - energy;
                energy = energy + temp;
                ans = ans + temp;
            }
            energy = energy - tasks[i][0];
        }
        return ans;
    }
};