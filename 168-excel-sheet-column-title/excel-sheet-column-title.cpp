// class Solution {
// public:
//     string convertToTitle(int columnNumber) {
//         string res="";
//         while(columnNumber>0){
//             columnNumber--;
//             res=char((columnNumber%26)+'A')+res;
//             columnNumber/=26;
//         }
//         return res;
//     }
// };



class Solution {
public:
    string convertToTitle(int columnNumber) {
     if(columnNumber==0)return "";
     columnNumber--;
     char c='A'+(columnNumber%26);
     return convertToTitle(columnNumber/26)+c;
    }
};

