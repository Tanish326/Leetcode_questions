class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors) {
        int n = colors.size();
        int i = 0;
        int j = 1;
        int count = 0;
        int groups = 0;
        while(j<2*n){
            if(colors[j%n]!=colors[(j-1)%n]){
                count++;
            }
            while(i<=j && (j-i+1)>3){
                if(i+1 < n && colors[i]!=colors[i+1]){
                    count--;
                }
                i++;

            }
            if(count==2 && (j-i+1)==3 && i<n){
                groups++;
            }
            j++;

        }
        return groups;
    }
};