// class Solution {
// public:
//     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//         int a = m - 1;
//         int b = n - 1;
//         int c= m + n - 1;
//         while (b >= 0) {
//             if (a >= 0 && nums1[a] > nums2[b]) {
//                 nums1[c--] = nums1[a--];
//             } else {
//                 nums1[c--] = nums2[b--];
//             }
//         }
//     }
// };


















// class Solution {
// public:
//     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//           int a=nums1.size();
//           int b=nums2.size();
//           int j=0;
//           for(int i=0;i<a;i++){
//             if(nums1[i]==0 && j<n){
//                 nums1[i]=nums2[j];
//                 j++;
//             }
//           }
          
//      }
// };


class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int a=m-1;
    int b=n-1;
    int c=m+n-1;
    while(b>=0){
        if(a>=0 && nums1[a]>nums2[b]){
            nums1[c--]=nums1[a--];
        }
        else{
            nums1[c--]=nums2[b--];
        }
    }
    }
};





