// class Solution {
// public:
//     int findKthPositive(vector<int>& arr, int k) {
//         int i = 0, num = 1;
//         while (true) {
//             if (i < arr.size() && arr[i] == num) {
//                 i++; 
//             } else {
//                 k--; 
//                 if (k == 0) return num;
//             }
//             num++;
//         }
//     }
// };



class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int left = 0, right = arr.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            int missing = arr[mid] - (mid + 1);

            if (missing < k) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return left + k;
    }
};
