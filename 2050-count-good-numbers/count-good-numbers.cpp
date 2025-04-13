#define MOD 1000000007
class Solution {
public:
    long long power(long long a,long long b){
         if(b==0)return 1;
         long long ans=power(a,b/2);
         ans*=ans;
         ans%=MOD;
         if(b%2)ans*=a;
         ans%=MOD;
         return ans;
    }
    int countGoodNumbers(long long n) {
        long long odd= n/2;
        long long even=n/2+n%2;
        return (power(5,even)*power(4,odd))%MOD;
    }
};