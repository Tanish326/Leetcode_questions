class Solution {
public:
    bool check(char c){
        return c>='a' && c<='z';
    }
    int isPrefixOfWord(string sentence, string searchWord) { 
        int n = sentence.size();
        int m = searchWord.size();
        int words = 1;
        if(check(sentence[0])){
            if((sentence.substr(0,m))==searchWord){
                return words;
            }
        }
        
        for(int i=1;i<n;i++){
           while(i<n && sentence[i]==' '){
            i++;
           }
           if(check(sentence[i])){
            if(sentence[i-1]==' '){
                words++;
               string a =  sentence.substr(i,m);
               if(a==searchWord){
                return words;
               }
            }

           }
        }
        return -1;
    }
};