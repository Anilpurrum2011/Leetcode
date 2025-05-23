// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {
//         int anils = s.length();
//         int maxLimi = 0;
//         unordered_set<char> charSet;
//         int l = 0;
//         for (int r = 0; r < anils; r++) {
//             if (charSet.count(s[r]) == 0) {
//                 charSet.insert(s[r]);
//                 maxLimi= max(maxLimi, r - l + 1);
//             } else {
//                 while (charSet.count(s[r])) {
//                     charSet.erase(s[l]);
//                     l++;
//                 }
//                 charSet.insert(s[r]);
//             }
//         }
//         return maxLimi;
//     }
// };


class Solution {
public:
    int lengthOfLongestSubstring(string s) {
     int n=s.size();
     int maxilen=0;
     int l=0;
     int r=0;
     unordered_set<char>sets;
     while(r<n){
        if(sets.count(s[r])==0){
            sets.insert(s[r]);
            maxilen=max(maxilen,r-l+1);
        }
        else{
            while(sets.count(s[r])){
                  sets.erase(s[l]);
                  l++;
            }
            sets.insert(s[r]);
        }
        r++;
     }
     return maxilen;
    }
};



