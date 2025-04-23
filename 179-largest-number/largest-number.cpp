// class Solution {
// public:
//     string largestNumber(vector<int>& nums) {
//         vector<string> numStrings;
//         for (int num : nums) {
//             numStrings.push_back(to_string(num));
//         }
//         sort(numStrings.begin(), numStrings.end(),
//              [](string &a, string &b) { return a + b > b + a; });
//         if (numStrings[0] == "0") return "0";
//         string largestNum;
//         for (string &numStr : numStrings) {
//             largestNum += numStr;
//         }

//         return largestNum;
//     }
// };



class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string>numstring;
        for(int num:nums){
            numstring.push_back(to_string(num));
        }
        sort(numstring.begin(), numstring.end(),
              [](string &a, string &b) { return a + b > b + a; });
        if(numstring[0]=="0")return "0";
        string largest;
        for(auto str:numstring){
            largest+=str;
        }
        return largest;
    }
};