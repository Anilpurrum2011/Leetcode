class Solution {
public:
    vector<int> largestDivisibleSubset(std::vector<int>& nums) {
        const int anils= nums.size();
        vector<int> ans;
        vector<int> sizeEndsAt(anils, 1); 
        vector<int> prevIndex(anils, -1);
        int maxSize = 0;
        int index = -1;
        sort(nums.begin(), nums.end()); 

        for (int i = 0; i < anils; ++i) {
            for (int j = i - 1; j >= 0; --j) {
                if (nums[i] % nums[j] == 0 && sizeEndsAt[i] < sizeEndsAt[j] + 1) {
                    sizeEndsAt[i] = sizeEndsAt[j] + 1;
                    prevIndex[i] = j;
                }
            }
            if (maxSize < sizeEndsAt[i]) {
                maxSize = sizeEndsAt[i];
                index = i;
            }
        }

        while (index != -1) {
            ans.push_back(nums[index]);
            index = prevIndex[index];
        }

        return ans;
    }
};
