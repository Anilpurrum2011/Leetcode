// class Solution {
// public:
//     int search(vector<int>& nums, int target) {
//         int n=nums.size();
//         int k=target;
//         int low=0;
//         int high=n-1;
//         while(low<=high){
//             int mid=(low+high)/2;
//             if(nums[mid]==k) return mid;
//             if(nums[low]<=nums[mid]){
//                 if(nums[low]<=k && k<=nums[mid]){
//                     high=mid-1;
//                 }
//                 else{
//                     low=mid+1;
//                 }
//             }
//             else{
//             if(nums[mid]<=k&& k<=nums[high]){
//                 low=mid+1;
//             }
//             else{
//                 high=mid-1;
//             }
//             }
//         }
//         return -1;
//     }
// };



class Solution {
public:
    int search(vector<int>& nums, int target) {
    int  n=nums.size();
    int k=target;
    int left=0;
    int right=n-1;
    while(left<=right){
        int mid=left+(right-left)/2;
        if(nums[mid]==k)return mid;
        if(nums[left]<=nums[mid]){
            if(nums[left]<=k && k<=nums[mid]){
                right=mid-1;
            }
            else{
                left=mid+1;
            }
        }
        else{
            if(nums[mid]<=k && k<=nums[right]){
                left=mid+1;
            }
            else{
                right=mid-1;
            }
        }
    }
    return -1;

    }
};