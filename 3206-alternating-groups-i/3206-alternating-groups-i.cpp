class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors) {
        int n = colors.size();
        int i = 0;
        int j = 1;
        int count = 0;
        int len = 0;
        while(j<n+2){
            if(colors[(j-1)%n]!=colors[j%n]){
                count++;
            }
            while((j-i+1)>3){
                if(i<n && colors[(i)%n]!=colors[(i+1)%n]){
                count--;}
                i++;
            }
            if((j-i+1)==3){
                if(count==2){
                    len++;
                }
            }
            j++;
        }
        return len;
    }
};