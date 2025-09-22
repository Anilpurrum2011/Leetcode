class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
    unordered_map<int,int>maps;
    int maxfreq=0;
    for(int a : nums)
    {
        maps[a]++;
        if(maps[a]>maxfreq){
            maxfreq=maps[a];
        }
    }
    int ans=0;
    for(auto &s:maps){
        if(s.second==maxfreq){
            ans+=maxfreq;
        }
    }
    return ans;
    }
};