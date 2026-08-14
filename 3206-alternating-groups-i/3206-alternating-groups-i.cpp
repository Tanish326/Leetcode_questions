class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors) {
         int n = colors.size();
         int len = 0;
         for(int i=0;i<n;i++){
            int count = 0;
            for(int j=1;j<=2;j++){
                int ind = (i+j)%n;
                if(ind==0){
                    if(colors[ind]!=colors[n-1]){
                        count++;
                    }
                }
                else if(ind>0 && colors[ind-1]!=colors[ind]){
                    count++;
                }else{
                    break;
                }
            }
            if(count==2){
                len++;
            }
         }
         return len;
    }
};