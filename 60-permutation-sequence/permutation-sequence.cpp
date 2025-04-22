// class Solution {
// public:
//     string getPermutation(int n, int k) {
//         vector<int>fact(n);
//         fact[0]=1;
//         for(int i=1;i<n;i++){
//           fact[i]=fact[i-1]*i;
//         }
//         vector<int>a;
//         for(int i=1;i<=n;i++){
//             a.push_back(i);
//         }
//         k--;
//         string res="";
//         for(int i=n-1;i>=0;i--){
//             int idx=k/fact[i];
//             res+=to_string(a[idx]);
//             a.erase(a.begin()+ idx);
//             k%=fact[i];
//         }
//         return res;
//     }

// };




// class Solution {
// public:
//     string getPermutation(int n, int k) {
//         vector<int> fact(n);
//         fact[0] = 1;
//         for (int i = 1; i < n; i++) {
//             fact[i] = fact[i - 1] * i;
//         }

//         vector<int> a;
//         for (int i = 1; i <= n; i++) {
//             a.push_back(i);
//         }

//         k--; // To make it 0-based index
//         string res = "";
//         for (int i = n - 1; i >= 0; i--) {
//             int idx = k / fact[i];
//             res += to_string(a[idx]);
//             a.erase(a.begin() + idx);
//             k %= fact[i];
//         }

//         return res;
//     }
// };



class Solution {
public:
    string getPermutation(int n, int k) {
        vector<int>fact(n);
        fact[0]=1;
        for(int i=1;i<n;i++){
            fact[i]=fact[i-1]*i;
        }
        vector<int>a;
        for(int i=1;i<=n;i++){
          a.push_back(i);
        }
        k--;
        string res="";
        for(int i=n-1;i>=0;i--){
            int idx=k/fact[i];
            res+=to_string(a[idx]);
            a.erase(a.begin()+idx);
            k%=fact[i];
        }
       return res;
    }
};