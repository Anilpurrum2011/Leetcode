class Solution {
public:
    bool detectCapitalUse(string word) {
        int n=word.size();
        int upp=0;
        for(int i=0;i<n;i++){
            if(isupper(word[i])){
                upp++;
            }
        }
        return (upp==n || upp==0 || (upp==1&&isupper(word[0])));  
    }
};