class Solution {
public:
    void swap(int *a,int *b){
        int t = *a;
        *a = *b;
        *b = t;
    }
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        int right = 0;
        for(int i=0;i<n;i++){
            if(nums[i]<0){
                right++;
            }
        }
        int left = right-1;
        vector<int>ans;
        while(left>=0 && right<n){
            if(abs(nums[left])>=abs(nums[right])){
                 ans.push_back(nums[right]*nums[right]);
                 right++;
            }else if(abs(nums[left])<abs(nums[right])){
                ans.push_back(nums[left]*nums[left]);
                left--;
            }
        }
        while(left>=0){
            ans.push_back(nums[left]*nums[left]);
            left--;
        }
        while(right<n){
            ans.push_back(nums[right]*nums[right]);
            right++;
        }
        return ans;
    }
};