class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        int i = 0;
        int j = 0;
        unordered_set<int>st;
        while(i<n1){
            st.insert(nums1[i]);
            i++;

        }
        vector<int>ans;
        while(j<n2){
            if(st.count(nums2[j])){
                ans.push_back(nums2[j]);
                st.erase(nums2[j]);
            }
            j++;
        }
        return ans;
    }
};