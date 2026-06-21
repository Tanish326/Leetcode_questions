class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int maxelem = nums[0];
        int count = 1;
      for(int i=1;i<n;i++){
      if(nums[i]==maxelem){
            count++;
        }else{
            if(count<=0){
                count = 1;
                maxelem = nums[i];
            }
            count--;
            
        }
 
        
           
        }
        if(count>=0){
            return maxelem;
        }
        return 0;

    }
      
    
};