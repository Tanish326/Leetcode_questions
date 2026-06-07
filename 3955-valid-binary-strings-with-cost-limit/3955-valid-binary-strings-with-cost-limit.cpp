class Solution {
public:

    void check(vector<string>& ans, string a, int i, int n){
        if(i==n){
            ans.push_back(a);
            return;
        }

        check(ans, a+"0", i+1, n);
        check(ans, a+"1", i+1, n);
    }

    vector<string> generateValidStrings(int n, int k) {

        vector<string> ans;
        vector<string> b;

        string a = "";   // fixed

        check(ans, a, 0, n);

        for(int i=0;i<ans.size();i++){

            int cost = 0;
            bool bad = false;

            for(int j=0;j<ans[i].size();j++){

                if(ans[i][j]=='1'){
                    cost += j;
                }

                if(j>0 && ans[i][j]=='1' && ans[i][j-1]=='1'){
                    bad = true;
                    break;
                }
            }

            if(!bad && cost<=k){
                b.push_back(ans[i]);
            }
        }

        return b;
    }
};