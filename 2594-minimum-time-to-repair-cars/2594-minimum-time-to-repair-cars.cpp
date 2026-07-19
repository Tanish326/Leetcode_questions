class Solution {
public:
    long long check(vector<int>&nums,long long mintime){
        long long count = 0;
        for(int i=0;i<nums.size();i++){
            count = count + (long long)sqrt((double)mintime/nums[i]);
        }
        return count;
    }
    long long repairCars(vector<int>& ranks, int cars) {
        int n = ranks.size();
         long long i = 1;
        long long j = (long long)*min_element(ranks.begin(),ranks.end())*cars*cars;
        long long ans = 0;
        while(i<=j){
            long long mid = i + (j-i)/2;
            if(check(ranks,mid)>=cars){
                ans = mid;
                j = mid-1;
            }else{
                i = mid+1;
            }
        }
        return ans;
    }
};