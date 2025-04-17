// class Solution {
// public:
//     void moveZeroes(vector<int>& nums) {
//         int n = 0, z = 0;

//         while (n< nums.size() && z< nums.size()) {
//             if (nums[z] != 0) {
//                 n++;
//                 z++;
//             } else if (nums[n] == 0) {
//                 n++;
//             } else {
//                 if (nums[z] == 0) {
//                     swap(nums[z++], nums[n++]);
//                 }
//             }
//         }
//     }
// };


class Solution {
public:
    void moveZeroes(vector<int>& nums) {
     int l=0;
     for(int r=0;r<nums.size();r++){
        if(nums[r]!=0){
            swap(nums[l],nums[r]);
            l++;
        }
     }
    }
};


