
        class Solution {
public:
    int earliestFinishTime(vector<int>&ls,vector<int>&ld,vector<int>&ws,vector<int>&wd){
        
        int m=ws.size();
        int n=ls.size();

        int mini=INT_MAX;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){

                int s1=ls[i];
                int d1=ld[i];
                int e1=s1+d1;

                int s2=ws[j];
                int d2=wd[j];
                int e2=s2+d2;

                // cout<<"S1:"<<s1<<endl;
                // cout<<"D1:"<<d1<<endl;
                // cout<<"E1:"<<e1<<endl;
                // cout<<endl;
                // cout<<"S2:"<<s2<<endl;
                // cout<<"D2:"<<d2<<endl;
                // cout<<"E2:"<<e2<<endl;

                int time;

                if(s1>=s2){
                    if(e2>=s1) time=e2+d1;
                    else time=d1+s1;
                }
                else{
                    if(e1>=s2) time=e1+d2;
                    else time=d2+s2;
                } 

                // cout<<"TIME:"<<time<<endl;
                // cout<<endl;

                mini=min(mini,time);
            }
        }

        return mini;

    }
};
   