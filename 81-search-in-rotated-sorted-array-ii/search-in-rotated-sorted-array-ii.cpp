// class Solution {
// public:
//     bool search(vector<int>& arr, int k) {
//        int n = arr.size(); // size of the array.
//     int low = 0, high = n - 1;
//     while (low <= high) {
//         int mid = (low + high) / 2;
//         if (arr[mid] == k) return true;
//         if (arr[low] == arr[mid] && arr[mid] == arr[high]) {
//             low = low + 1;
//             high = high - 1;
//             continue;
//         }
//         if (arr[low] <= arr[mid]) {
//             if (arr[low] <= k && k <= arr[mid]) {
//                 high = mid - 1;
//             }
//             else {
//                 low = mid + 1;
//             }
//         }
//         else { 
//             if (arr[mid] <= k && k <= arr[high]) {
//                 low = mid + 1;
//             }
//             else {
//                 high = mid - 1;
//             }
//         }
//     }
//     return false;
//     }
// };




class Solution {
public:
    bool search(vector<int>& nums, int target) {
    int n=nums.size();
    int left=0,right=n-1;
    while(left<=right){
        int mid=left+(right-left)/2;
        if(nums[mid]==target){
            return true;
        }
        if(nums[left]==nums[mid] && nums[mid]==nums[right]){
            left=left+1;
            right=right-1;
            continue;
        }
        if(nums[left]<=nums[mid]){
            if(nums[left]<=target && target<=nums[mid]){
                right=mid-1;
            }
            else{
                left=mid+1;
            }
        }
        else{
            if(nums[mid]<=target && target<=nums[right]){
                left=mid+1;
            }
            else{
                right=mid-1;
            }
        }
      }
      return false;
    }
};
