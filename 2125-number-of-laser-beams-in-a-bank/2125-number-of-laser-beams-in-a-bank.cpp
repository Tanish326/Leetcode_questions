class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int m = bank.size();
        int n = bank[0].size();
        int devices = 0;
        int lasers = 0;
        for(int i=0;i<m;i++){
            int count = 0;
            for(int j=0;j<n;j++){
                if(bank[i][j]=='1'){
                    count++;
                }
            }
            if(i>0 && count>0){
              lasers = lasers +  devices*count;
            }
            if(count>0){
            devices = count;}
          
        }
        return lasers;
    }
};