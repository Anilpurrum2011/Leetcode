// class Solution {
// public:
//     string triangleType(vector<int>& nums) {
//         int a=nums[0],b=nums[1],c=nums[2];
//         string res="";
//         if((a+b>c && b+c>a && c+a>b)&&(a==b && a==c)){
//             res+="equilateral";
//         }
//         else if((a+b>c && b+c>a && c+a>b)&& (a==b || b==c || c==a)){
//             res+="isosceles";
//         }
//         else if(a+b>c && b+c>a && c+a>b){
//             res+="scalene";
//         }
//         else{
//             res+="none";
//         }
//         return res;
//     }
// };

class Solution {
public:
    string triangleType(vector<int>& nums) {
        set<int>s(nums.begin(),nums.end());
        sort(nums.begin(),nums.end());
        if((nums[0] + nums[1])<=nums[2]) return "none";
        if(s.size() == 1) return "equilateral";
        if(s.size() == 2) return "isosceles";
        return "scalene";
    }
};