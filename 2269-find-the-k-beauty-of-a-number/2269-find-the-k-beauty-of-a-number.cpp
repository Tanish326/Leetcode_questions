class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string a = to_string(num);
        int n = a.size();
        int i = 0;
        int j = 0;
        int count = 0;
        string ans = "";
        while(j<n){
            ans = ans + a[j];
            if((j-i+1)>k){
                ans.erase(ans.begin());
                i++;
            }
            if((j-i+1)==k){
                int a = stoi(ans);
                if(a!=0 && num%a==0){
                    count++;
                }
            }
            j++;

        }
        return count;
    }
};