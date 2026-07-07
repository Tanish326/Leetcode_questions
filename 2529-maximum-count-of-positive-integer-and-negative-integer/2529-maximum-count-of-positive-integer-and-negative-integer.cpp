class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int countpos = 0;
        int countneg = 0;
        int n = nums.size();
        int low = 0;
        int high = n-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid]<0){
                countneg += mid-low+1;
                low = mid+1;
            }else if(nums[mid]>0){
                countpos += high-mid+1;
                high = mid-1;
            }else{
                if((mid-1)>=0 && nums[mid-1]<0){
                    countneg += mid-low;
                    low = mid+1;
                }else if(mid+1<n && nums[mid+1]>0){
                    countpos += high - mid;
                    high = mid-1;
                }else{
                    int i = mid-1;
                    while(i>=low && nums[i]==0){
                        i--;
                    }
                    int j = mid+1;
                    while(j<=high && nums[j]==0){
                        j++;
                    }
                    int val1 = (mid-1)-i;
                    int val2 = j-(mid+1);
                    if(val1<val2){
                        low = j;
                    }else{
                        high = i;
                    }
                }
            }
        }
        return max(countpos,countneg);
    }
};