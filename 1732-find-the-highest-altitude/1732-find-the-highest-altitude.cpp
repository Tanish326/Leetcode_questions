class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int max_alt;
          if(gain[0]>0){
            max_alt = gain[0];
          }else{
            max_alt = 0;
          }
          for(int i=1;i<gain.size();i++){
                gain[i] = gain[i] + gain[i-1];
                if(gain[i]>max_alt){
                    max_alt = gain[i];
                }
          }
          return max_alt;
        
    }
};