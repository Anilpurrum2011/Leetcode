class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
    int n=nums.size();
    unordered_map<int,int>maps;
    int maxfre=0;
    int val=nums[0];
    for(int it:nums){
        if(it%2==0){
            maps[it]++;
            if(maps[it]>maxfre || maxfre==maps[it] && it<val){
                val=it;
                maxfre=maps[it];
            }
        }
    }
    return maxfre==0 ? -1:val;
    }
};