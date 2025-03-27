// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//     unordered_map<int, int> countMap;
//     int majorityCount = nums.size() / 2;
//     for (int num : nums) {
//         countMap[num]++;
//         if (countMap[num] > majorityCount) {
//             return num;
//         }
//     }
//     return -1; 
        
//     }
// };

class Solution {
public:
    int majorityElement(vector<int>& nums) {
    int n=nums.size();
    int maxele=nums[0];
    int maxfre=0;
    for(int i=0;i<n;i++){
        if(nums[i]==maxele) maxfre++;
        else maxfre--;
        if(maxfre==0){
            maxele=nums[i];
            maxfre=1;
        }
    }
    return maxele;
    }
};
