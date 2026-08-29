class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        int n = s.size();
        int m = words.size();
        vector<int>ans;
        unordered_map<string,int>mpp;
        for(int i=0;i<m;i++){
            mpp[words[i]]++;
        }
        int len = words[0].size();
        for(int i=0;i<len;i++){
            int left = i;
            int right = i;
            int count = 0;
            unordered_map<string,int>mpp1;
            while((right+len)<=n){
                string a = s.substr(right,len);
                right = right + len;
                 
                if(mpp.find(a)==mpp.end()){
                    mpp1.clear();
                    count = 0;
                    left = right;
                }else{
                    mpp1[a]++;
                    count++;
                }
                
                while(mpp1[a]>mpp[a]){
                    string leftword = s.substr(left,len);
                    mpp1[leftword]--;
                    count--;
                    left = left + len;
                }
                if(count==m){
                    ans.push_back(left);
                 string leftword = s.substr(left,len);
                    mpp1[leftword]--;
                    count--;
                    left = left + len;
                    
                }
                 

               
            }
        }
        return ans;
    }
};