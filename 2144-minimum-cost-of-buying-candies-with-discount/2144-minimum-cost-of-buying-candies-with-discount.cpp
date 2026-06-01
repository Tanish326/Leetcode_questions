class Solution {
public:
   
    int minimumCost(vector<int>& cost) {

       sort(cost.begin(), cost.end(), greater<int>());

int mincost = 0;

for(int i = 0; i < cost.size(); i += 3) {
    mincost += cost[i];

    if(i + 1 < cost.size())
        mincost += cost[i + 1];
}
return mincost;
    }};