class Solution {
public:
    string toHex(int num) {
    string digits="0123456789abcdef";
    string res="";
    unsigned int n=num;
    if(n==0){
        return to_string(0);
    }
    while(n>0){
        int rem=n%16;
        res=res+digits[rem];
        n=n/16;
    }
    reverse(res.begin(),res.end());
    return res;
    }
};

