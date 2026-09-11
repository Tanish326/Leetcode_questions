
   class Solution {
public:
    set<int> st;

    void check(vector<int>& digits, vector<int>& ans, vector<bool>& used) {
        if (ans.size() == 3) {
            if (ans[0] == 0 || ans[2] % 2 != 0)
                return;

            int num = ans[0] * 100 + ans[1] * 10 + ans[2];
            st.insert(num);
            return;
        }

        for (int i = 0; i < digits.size(); i++) {
            if (used[i]) continue;

            used[i] = true;
            ans.push_back(digits[i]);

            check(digits, ans, used);

            ans.pop_back();
            used[i] = false;
        }
    }

    int totalNumbers(vector<int>& digits) {
        st.clear();

        vector<int> ans;
        vector<bool> used(digits.size(), false);

        check(digits, ans, used);

        return st.size();
    }
};
