// class Solution {
// public:
//     int addDigits(int num) {
//         if(num<=9){
//             return num;
//         }
//         while(num>9){
//             int sum=0;
//             while(num>0){
//                 int digit=num%10;
//                 sum+= digit;
//                 num/=10;
//             }
//             num=sum;
//         }
//         if(num<=9){
//             return num;
//         }
//         return 0;
//     }
// };



class Solution {
public:
    int addDigits(int num) {
    if(num<=9){
        return num;
    }
    while(num>9){
        int sum=0;
        while(num>0){
            sum+=num%10;
            num=num/10;
        }
        num=sum;
    }
    if(num<=9){
        return num;
    }
    return 0;
    }
};





