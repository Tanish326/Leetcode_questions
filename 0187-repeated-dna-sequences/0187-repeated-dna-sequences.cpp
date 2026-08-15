class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
    int n = s.size();
    unordered_map<string,int> mpp;
    vector<string> ans;

    for(int i = 0; i <= n - 10; i++) {
        string a = "";
        for(int j = 0; j < 10; j++) {
            a += s[i + j];
        }

        mpp[a]++;

        if(mpp[a] == 2) {   // add only once when it becomes repeated
            ans.push_back(a);
        }
    }

    return ans;
}
};