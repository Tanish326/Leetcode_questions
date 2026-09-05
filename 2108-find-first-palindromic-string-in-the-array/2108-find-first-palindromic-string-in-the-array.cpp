class Solution {
public:
    bool check(string a){
        int n = a.size();
        int i = 0;
        int j = n-1;
        while(i<=j){
            if(a[i]!=a[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
           int n = words.size();
           string a = "";
           for(int i=0;i<n;i++){
            if(check(words[i])){
                 a = words[i];
                break;
            }
           }
           return a;
    }
};