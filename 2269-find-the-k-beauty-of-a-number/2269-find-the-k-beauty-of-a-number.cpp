class Solution {
public:
 int divisorSubstrings(int num, int k) {
    string ans = to_string(num);
    int i = 0;
    int j = 0;
    int n = ans.size();
    string a = "";
    int count = 0;

    while(j < n) {
        a = a + ans[j];

        while(i < n && a.size() > k) {
            a.erase(0, 1);   // remove first character
            i++;
        }

        if(a.size() == k) {
            int val = stoi(a);

            if(val != 0 && num % val == 0) {
                count++;
            }
        }

        j++;
    }

    return count;
}
};