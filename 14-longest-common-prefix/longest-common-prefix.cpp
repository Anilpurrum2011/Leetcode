class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string answer="";
        sort(strs.begin(),strs.end());
        int n=strs.size();
        string firstone=strs[0],lastone=strs[n-1];
        for(int i=0;i<min(firstone.size(),lastone.size());i++){
            if(firstone[i]!=lastone[i]){
                return answer;
            }
            answer+=firstone[i];
        }
        return answer;
    }
};