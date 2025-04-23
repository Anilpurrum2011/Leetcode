// class Solution {
// public:
//     int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
//         int totalgas = 0;
//         int totalcost = 0;
//         int total = 0;
//         int start = 0;
//         for(int i=0;i<gas.size();i++)
//         {
//             totalgas += gas[i];
//             totalcost += cost[i];
//         }
//         if(totalgas<totalcost) return -1;
//         for(int i=0;i<gas.size();i++)
//         {
//             total += (gas[i]-cost[i]);
//             if(total<0)
//             {
//                 total=0;
//                 start=i+1;
//             }
//         }
//         return start;
//     }
// };


// class Solution {
// public:
//     int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
//        int totalcost=0;
//        int totalgas=0;
//        int total=0;
//        int start=0;
//        for(int i=0;i<gas.size();i++){
//         totalgas+=gas[i];
//         totalcost+=cost[i];
//        }
//        if(totalgas<totalcost)return -1;
//        for(int i=0;i<gas.size();i++){
//         total+=(gas[i]-cost[i]);
//         if(total<0){
//             total=0;
//             start=i+1;
//         }
//        }
//        return start;
//     }
// };



class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
    int start=0,tank=0,total=0;
    for(int i=0;i<gas.size();i++){
        int bal=gas[i]-cost[i];
        total+=bal;
        tank+=bal;
        if(tank<0){
            start=i+1;
            tank=0;
        }
    }
    if(total>=0){
        return start;
    }
    return -1;
    }
};

