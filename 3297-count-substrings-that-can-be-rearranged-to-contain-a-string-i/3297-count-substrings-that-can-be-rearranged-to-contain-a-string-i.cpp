class Solution {
public:
    long long validSubstringCount(string word1, string word2) {
        int n = word1.size();
        int m = word2.size();
        long long count = 0;
        int i = 0;
        int j = 0;
        long long ans = 0;
        unordered_map<char,int>mpp;
        for(int i=0;i<m;i++){
            mpp[word2[i]]++;
        }

        while(j<n){
            if(mpp.find(word1[j])!=mpp.end()){
                if(mpp[word1[j]]>0){
                    count = count + 1;

                     
                }
                 mpp[word1[j]]--;
             

            }
            while(i<=j && count==m){
                if(count==m){
                    ans += (long long) n-j;
                }

               if(mpp.find(word1[i])!=mpp.end()){
                mpp[word1[i]]++;
                if(mpp[word1[i]]>0){
                    count -= 1;
                }
               }
             
              

               i++;
            


            }
          j++;
          

        }
        return ans;
    }
};