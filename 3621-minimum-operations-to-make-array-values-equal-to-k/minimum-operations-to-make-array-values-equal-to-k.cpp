class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
       sort(nums.begin(), nums.end());
        int mini = nums[0];
        if (mini < k) return -1; 
        int cnt = 0;
        unordered_set<int>sets;
        for(auto num:nums){
            sets.insert(num);
        }
        for (int num:sets) {
            if (num > k) {
                cnt++;
                // while (i + 1 < nums.size() && nums[i] == nums[i + 1]) 
                //     i++;
            }
        }
        return cnt; 
    }
};