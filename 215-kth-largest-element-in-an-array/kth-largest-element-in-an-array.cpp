// class Solution {
// public:
//     int findKthLargest(vector<int>& nums, int k) {
//        int n=nums.size();
//        priority_queue<int>q;
//        for(int i=0;i<n;i++){
//         q.push(nums[i]);
//        }
//        for(int i=0;i<n;i++){
//         if(i==k-1){
//             return q.top();
//         }
//         else{
//             q.pop();
//         }
//        }
//        return -1;
//     }
// };

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
      int n=nums.size();
      sort(nums.rbegin(),nums.rend());
      return nums[k-1];
    }
};