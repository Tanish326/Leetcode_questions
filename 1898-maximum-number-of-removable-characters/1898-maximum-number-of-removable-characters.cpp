class Solution {
public:
   bool is_subsequence(string temp,string target){
    int n = temp.size();
    int m = target.size();
    int i = 0;
    int j = 0;
    while(i<n && j<m){
        if(target[j]==temp[i]){
            j++;
        }
        i++;

    }
     return j==m;
   }
    bool check(string s,vector<int>&nums,int k,string p){
        string a(s.begin(),s.end());
          for(int i=0;i<k;i++){
            a[nums[i]] = '#';
          }
          if(is_subsequence(a,p)){
            return true;
          }
          return false;
    }
    int maximumRemovals(string s, string p, vector<int>& removable) {
          int n = s.size();
          int l = 0;
          int h = removable.size();
          int ans = 0;
          while(l<=h){
            int mid = l + (h-l)/2;
            if(check(s,removable,mid,p)){
                ans = mid;
                l = mid+1;
            }else{
                h = mid-1;
            }
          }
          return ans;
    }
};