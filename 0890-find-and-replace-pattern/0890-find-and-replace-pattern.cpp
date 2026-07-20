class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        int n = words.size();
        int m = pattern.size();
        vector<string>ans;
     
        for(int i=0;i<n;i++){
       unordered_map<char,char>mpp1;
        unordered_map<char,char>mpp2;
        int count = 0;
            for(int j = 0;j<m;j++){
                if(j>words[i].size()){
                    count++;
                    break;
                }else{
                if(mpp1.find(words[i][j])!=mpp1.end()){
                    if(mpp1[words[i][j]]!=pattern[j]){
                         count++;
                         break;
                    }

                    }else if(mpp2.find(pattern[j])!=mpp2.end()){
                        if(mpp2[pattern[j]]!=words[i][j]){
                            count++;
                            break;
                        }
                    }else{
                        mpp1[words[i][j]] = pattern[j];
                        mpp2[pattern[j]] = words[i][j];
                    }
                }
            }
            if(count==0){
                ans.push_back(words[i]);
            }

        }
        return ans;

    }
};