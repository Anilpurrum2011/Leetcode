class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
         int n = nums.size();
        vector<int> keyIndices;
        for (int i = 0; i < n; i++) {
            if (nums[i] == key) {
                keyIndices.push_back(i);
            }
        }
        set<int> resultSet;
        for (int idx : keyIndices) {
            for (int j = max(0, idx - k); j <= min(n - 1, idx + k); j++) {
                resultSet.insert(j);
            }
        }
        return vector<int>(resultSet.begin(), resultSet.end());
    }
};