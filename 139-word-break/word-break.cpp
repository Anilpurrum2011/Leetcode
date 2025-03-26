class Solution {
public:
    int solve(int i,string &s,set<string>&st,vector<int>&dp){
        if(i==s.size()){
            return 1;
        }
        if(dp[i]!=-1){
            return dp[i];
        }
        string sub="";
        for(int j=i;j<s.size();j++){
            sub+=s[j];
            if(st.find(sub)!=st.end()){
                if(solve(j+1,s,st,dp)){
                    return dp[i]=1;
                }
            }
        }
        return dp[i]=0;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        vector<int>dp(s.size()+1,-1);
        set<string>sets;
        for(auto it:wordDict){
            sets.insert(it);
        }
        return solve(0,s,sets,dp);
    }
};