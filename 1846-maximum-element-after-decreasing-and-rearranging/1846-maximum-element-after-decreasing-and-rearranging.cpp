class Solution {
public:
    void swap(int *a, int *b){
        int t = *a;
        *a = *b;
        *b = t;

    }
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        
        int n = arr.size();
        if(n==1){
          return 1;
        }
        int count = 1;
        if(arr[0]!=1){
            int j = 1;
            while(j<n){
                if(arr[j]==1){
                    swap(&arr[0],&arr[j]);
                    break;
                }else{
                    count++;
                }
                j++;
            }
        }
        if(count==n){
            arr[0] = 1;
        }
        int maxelem = arr[0];
        int c = 0;
        sort(arr.begin(),arr.end());
        for(int i=1;i<n;i++){
            if(abs(arr[i]-arr[i-1])<=1){
                c++;
            }else{
                arr[i] = arr[i-1] + 1;
            }
            maxelem = max(arr[i],maxelem);
        }
        return maxelem;
        
    }
};