class Solution {
public:
    void removenum(unordered_map<int,int>&maps,int num){
        maps[num]--;
        if(maps[num]==0){
            maps.erase(num);
        }
    }
    int minimumOperations(vector<int>& nums) {
        unordered_map<int,int>maps;
        int n=nums.size();
        for(int i=0;i<n;i++){
            maps[nums[i]]++;
        }
        int ans=0;
        for(int i=0;i<n;i+=3){
            if(maps.size()==nums.size()-i){
                return ans;
            }
            else{
                if(i+2<nums.size()){
                    removenum(maps,nums[i]);
                    removenum(maps,nums[i+1]);
                    removenum(maps,nums[i+2]);
                }
                ans++;
            }
        }
        return ans;
    }
};