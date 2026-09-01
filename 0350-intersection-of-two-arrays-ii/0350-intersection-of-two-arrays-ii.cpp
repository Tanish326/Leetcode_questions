class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mpp;
        int n1 = nums1.size();
        int n2 = nums2.size();
        vector<int>ans;
        if(n1<n2){
            for(int i=0;i<n1;i++){
                mpp[nums1[i]]++;
            }
            for(int i=0;i<n2;i++){
                if(mpp.find(nums2[i])!=mpp.end()){
                    ans.push_back(nums2[i]);
                    mpp[nums2[i]]--;
                    if(mpp[nums2[i]]==0){
                        mpp.erase(nums2[i]);
                    }

                }
            }
            return ans;
        }else{
            for(int j=0;j<n2;j++){
                mpp[nums2[j]]++;
            }
            for(int i=0;i<n1;i++){
                if(mpp.find(nums1[i])!=mpp.end()){
                    ans.push_back(nums1[i]);
                    mpp[nums1[i]]--;
                    if(mpp[nums1[i]]==0){
                        mpp.erase(nums1[i]);
                    }
                }
            }
            return ans;
        }
      
        return ans;
    }
};