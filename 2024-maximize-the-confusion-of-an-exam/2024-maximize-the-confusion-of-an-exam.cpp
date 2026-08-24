class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
           int n = answerKey.size();
           int countT = 0;
           int countF = 0;
           int i = 0;
           int j = 0;
           int count = 0;
           int maxlen = 0;
           while(j<n){
            if(answerKey[j]=='T'){
                countT++;
            }else{
                countF++;
            }
            count = min(countT,countF);
             if(count>k){
             
                while(i<n && count>k){
                    if(answerKey[i]=='T'){
                        countT--;
                    }else{
                        countF--;
                    }
                 count = min(countT,countF);
                    i++;
                    
                }

             }
             if(count<=k){
                maxlen = max(maxlen,(j-i+1));
             }
             j++;

           }
           return maxlen;
    }
};