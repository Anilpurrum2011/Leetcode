class Solution {
public:
    int countDigitOne(int n) {
        long long digitplace=1;
        int res=0;
        while(n/digitplace!=0){
            long long high = n / (digitplace * 10);
            long long curr = (n / digitplace) % 10;
            long long low = n % digitplace;
            if(curr==0){
                res+=high*digitplace;
            }
            else if(curr==1){
                res+=(high*digitplace)+(low+1);
            }
            else{
                res+=(high+1)*digitplace;
            }
            digitplace*=10;
        }
        return res;
    }
};