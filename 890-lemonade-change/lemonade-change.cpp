// class Solution {
// public:
//     bool lemonadeChange(vector<int>& bills) {
//         unordered_map<int, int> track;
//         int netBal = 0;
//         for(auto bill : bills) {
//             int  change = bill - 5;
//             if (change == 5) {
//                 if(track[5] == 0) return false;
//                 else track[5]--;
//             } 
//             else if (change == 15) {
//                 if (track[5] >= 1 && track[10] >= 1) {
//                     track[5]--;
//                     track[10]--;
//                 }
//                 else if (track[5] >= 3) track[5] += -3;
//                 else return false;
//             }
//             track[bill]++;
//         }
//         return true;
//     }
// };



class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
    unordered_map<int,int>maps;
    for(auto bill :bills){
        int change=bill-5;
        if(change==5){
            if(maps[5]==0)return false;
            else maps[5]--;
        }
        else if(change==15){
            if(maps[5]>=1 && maps[10]>=1){
                maps[5]--;
                maps[10]--;
            }
            else if(maps[5]>=3) maps[5]+=-3;
            else return false;
        }
        maps[bill]++;
    }
    return true;
    }
};