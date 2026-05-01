class Solution {
public:
   void check(vector<string>&ans,string a,int i,int n,int count){
    if(count<0){
        return;
    }
    if(a.size()==2*n){
        if(count==0){
        ans.push_back(a);}
        return;
    }
       if(i<n){
     check(ans,a +'(',i+1,n,count+1);}
     if(count>0){
     check(ans,a +')',i,n,count-1);}
   }
    vector<string> generateParenthesis(int n) {
         vector<string>ans;
         string a = "";

         check(ans,a,0,n,0);
         return ans;
    }
};