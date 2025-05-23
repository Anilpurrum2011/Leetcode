// class Solution {
// public:
//     int lengthOfLastWord(string s) {
//         int a=s.size();
//         int count=0;
//         bool c=false;
//         for(int i=a-1;i>=0;i--){
//             if(s[a]==' ')count=count+1;
//             if(s[i]!=' '){
//                 c=true;
//                 count++;
//             }
//             else if(c){
//                 break;
//             }
//         }
//         return count;
//     }
// };


class Solution {
public:
    int lengthOfLastWord(string s) {
    int n=s.size();
    bool c=false;
    int count=0;
    for(int i=n-1;i>=0;i--){
        if(s[n]==' ')count++;
        if(s[i]!=' '){
            c=true;
            count++;
        }
        else if(c){
            break;
        }
    }
    return count;
    }
};
