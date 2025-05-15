class Solution {
public:
    vector<string> getLongestSubsequence(vector<string>& words, vector<int>& groups) {
        vector<string>res;
        int n=groups.size();
        res.push_back(words[0]);
        if(n==1){
            return words;
        }
        for(int i=1;i<n;i++){
            if(groups[i]!=groups[i-1]){
                res.push_back(words[i]);
            }
        }
        return res;
    }
};