class Solution {
public:
  
    int countOfSubstrings(string word, int k) {
        int n = word.size();
        int countsub = 0;
        for(int i=0;i<n;i++){
            unordered_map<char,int>mpp;
            int count = 0;
            for(int j=i;j<n;j++){
      if(word[j]=='a' || word[j]=='e' || word[j]=='i' || word[j]=='o' || word[j]=='u'){
                mpp[word[j]]++;
            }else{
                count++;
            }
         if(count==k && mpp['a']>0 && mpp['e']>0 && mpp['i']>0 && mpp['o']>0 && mpp['u']>0){
                countsub++;
            }
            }
        }
        return countsub;
    }
};