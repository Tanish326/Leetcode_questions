class Solution {
public:
    bool check(int ind1,int ind2,string s){
        while(ind1<=ind2){
            if(s[ind1]!=s[ind2]){
                return false;
            }
            ind1++;
            ind2--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int n = s.size();
        int i = 0;
        int j = n-1;
        while(i<=j){
            if(s[i]!=s[j]){
                return check(i+1,j,s) || check(i,j-1,s);
            }
            i++;
            j--;
        }
        return true;
    }
};