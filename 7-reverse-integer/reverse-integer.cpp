// class Solution {
// public:
//     int reverse(int x) {
//     int revnum = 0; 
//     if(x>0){
//     while (x > 0) { 
//         revnum = revnum * 10 + x % 10; 
//         x = x / 10; 
//     }
//     return revnum;
//     }
//     else{
//         int a=-x;
//         while (a> 0) { 
//         revnum = revnum * 10 + a % 10; 
//         a = a / 10; 
//     }
//     return -revnum;

//     }
//     //return revnum; 
//     }
// };



class Solution {
public:
    int reverse(int x) {
    long long r=0;      
        while(x){
         r=r*10+x%10; 
         x/=10;     
        }
        if(r>INT_MAX || r<INT_MIN) return 0;
        return int(r);  
    }
};
