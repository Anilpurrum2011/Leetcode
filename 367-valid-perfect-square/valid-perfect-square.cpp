// class Solution {
// public:
//     bool isPerfectSquare(int num) {
//         if(num==1){
//             return true;
//         }
//         long long low=0;
//         long long high=num-1;
//         while(low<=high){
//           long long mid=(low+high)/2;
//           if(mid*mid==num){
//             return true;
//           }
//           if(mid*mid>num){
//             high=mid-1;
//           }
//           else{
//             low=mid+1;
//           }
//         }
//         return false;
//     }
// };


class Solution {
public:
    bool isPerfectSquare(int num) {
    if(num==1){
        return true;
    }
    long long low=0;
    long long high=num-1;
    while(low<=high){
       long long mid=low+(high-low)/2;
        if(mid*mid==num){
            return true;
        }
        if(mid*mid>num){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return false;
    }
};

