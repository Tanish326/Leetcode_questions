class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        int j = n-1;
        long long sum = 0;
        while(i<=j){
            string a = to_string(nums[i]);
            string b = to_string(nums[j]);
            string ans = a + b;
            if(i==j){
                sum = sum + stoi(a);
            }else{
            sum += (long long) stoi(ans);}
            i++;
            j--;

        }
        return sum;
    }
};