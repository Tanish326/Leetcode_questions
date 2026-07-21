class Solution {
public:
    string frequencySort(string s) {
      
      unordered_map<char,int>mpp;
      for(int i=0;i<s.size();i++){
        mpp[s[i]]++;
      }
      priority_queue<pair<int,char>>pq;
      for(auto &k : mpp){
        pq.push({k.second,k.first});
      }
      string ans = "";
      while(!pq.empty()){
        int a = pq.top().first;
        char b = pq.top().second;
        pq.pop();
        while(a>0){
            ans += b;
            a--;
        }
      }
   
      return ans;


    }
};