// class Solution {
// public:
//     bool isHappy(int n) {
//        if (n == 1 || n == 7) {
//             return true;
//         }
//         while (n > 9) {
//             int sum = 0;
//             while (n > 0) {
//                 int digit = n % 10;
//                 sum += digit * digit;
//                 n /= 10;
//             }
//             n = sum;
//             if (n == 1 || n == 7) {
//                 return true;
//             }
//         }
//         return n == 1 || n == 7;
//     }
// };







// class Solution {
// public:
//     bool isHappy(int n) {
//         if(n==1 || n==7){
//             return true;
//         }
//         while(n>9){
//             int sum=0;
//             while(n>0){
//                 int digit=n%10;
//                 sum+= digit*digit;
//                 n/=10;
//             }
//             n=sum;
//             if(n==1 || n==7){
//                 return true;
//             }
//         }
//         return n==1 || n==7;
//     }
// };



class Solution {
public:
    bool isHappy(int n) {
        if(n==1 || n==7){
            return true;
        }
        while(n>9){
            int sum=0;
            while(n>0){
                int rem=n%10;
                sum+=rem*rem;
                n/=10;
            }
            n=sum;
            if(n==1 || n==7){
                return true;
            }
        }
        return n==1||n==7;
    }
};


