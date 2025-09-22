class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
    unordered_map<int,int>maps;
    int maxfreq=0;
    for(int i=0;i<nums.size();i++)
    {
        maps[nums[i]]++;
        if(maps[nums[i]]>maxfreq){
            maxfreq=maps[nums[i]];
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