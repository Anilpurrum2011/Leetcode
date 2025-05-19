class Solution {
public:
    string triangleType(vector<int>& nums) {
        int a=nums[0],b=nums[1],c=nums[2];
        string res="";
        if((a+b>c && b+c>a && c+a>b)&&(a==b && a==c)){
            res+="equilateral";
        }
        else if((a+b>c && b+c>a && c+a>b)&& (a==b || b==c || c==a)){
            res+="isosceles";
        }
        else if(a+b>c && b+c>a && c+a>b){
            res+="scalene";
        }
        else{
            res+="none";
        }
        return res;
    }
};