class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
          int n = arr.size();
          int i = 0;
          int j = 0;
          int count = 0;
          int sum = 0;
          while(j<n){
            sum = sum + arr[j];
            while((j-i+1)>k){
                sum = sum - arr[i];
                i++;
            }
            if((j-i+1)==k && (sum/k)>=threshold){
                count++;
            }
            j++;

          }
          return count;
    }
};