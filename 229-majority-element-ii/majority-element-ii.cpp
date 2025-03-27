class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> maps;
        for(int i = 0; i < nums.size(); i++) {
            maps[nums[i]]++;
        }
        vector<int> majorityElements;
        int a = nums.size() / 3;
        for(auto it : maps) {
            int element = it.first;
            int count = it.second;
            if(count > a) {
                majorityElements.push_back(element);
            }
        }
        return majorityElements;     
    }
};