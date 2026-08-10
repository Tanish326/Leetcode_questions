class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
           int n = numbers.size();
           int i = 1;
           int j = n;
           while(i<j){
            int sum = numbers[i-1] + numbers[j-1];
            if(sum==target){
                return {i,j};
            }else if(sum<target){
                i++;
            }else{
                j--;
            }
           }
           return {-1,-1};
    }
};