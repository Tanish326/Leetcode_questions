class Solution {
public:
    void swap(int *a, int *b){
        int t = *a;
        *a = *b;
        *b = t;
    }
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if(n<2){
            return nums.size();
        }
      int write = 2;

for(int read = 2; read < n; read++)
{
    if(nums[read] != nums[write-2])
    {
        nums[write] = nums[read];
        write++;
    }
}
        return write;
    }
};