class Solution {
public:    
void swap(int *a,int *b){
    int t = *a;
    *a = *b;
    *b = t;
}
void sortColors(vector<int>& nums) {
        int n = nums.size();
        int l = 0;
        int mid = 0;
        int h = n-1;
        while(l<=mid && h>=mid){
            if(nums[mid]==0){
                swap(&nums[l],&nums[mid]);
                l++;
                mid++;
            }else if(nums[mid]==2){
                swap(&nums[mid],&nums[h]);
                h--;
            }else{
                mid++;
            }
        }

    }
};