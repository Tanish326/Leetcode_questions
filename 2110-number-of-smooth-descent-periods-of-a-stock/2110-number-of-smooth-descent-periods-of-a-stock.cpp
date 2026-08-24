class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        int n = prices.size();
        int i=0;
        int j = 0;
        long long count = 0;
        while(j<n){
            while(i<j && prices[j]!=prices[j-1]-1){
                i++;
            }
           count = (long long)(count + (j-i+1));
           j++;
        }
        return count;
    }
};