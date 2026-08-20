class Solution {
public:
   vector<int> findAnagrams(string s, string p) {
    int n = s.size();
    int k = p.size();

    unordered_map<char,int> mpp;
    unordered_map<char,int> target;

    for(char c : p){
        target[c]++;
    }

    int i = 0;
    int j = 0;

    vector<int> ans;

    while(j < n){

        mpp[s[j]]++;

        while(j - i + 1 > k){
            mpp[s[i]]--;

            if(mpp[s[i]] == 0){
                mpp.erase(s[i]);
            }

            i++;
        }

        if(j - i + 1 == k && mpp == target){
            ans.push_back(i);
        }

        j++;
    }

    return ans;
}
};