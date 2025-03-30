// class Solution {
// public:
//     vector<vector<int>> merge(vector<vector<int>>& intervals) {
//         vector<vector<int>>mi;
//         if(intervals.size()==0){
//             return mi;
//         }
//         sort(intervals.begin(),intervals.end());
//         vector<int>tempInterval=intervals[0];
//         for(auto it :intervals){
//             if(it[0]<=tempInterval[1]) {
//                 tempInterval[1]=max(it[1],tempInterval[1]);
//             }
//             else{
//                 mi.push_back(tempInterval);
//                 tempInterval=it;
//             }
//         }
//         mi.push_back(tempInterval);
//         return mi;
//     }
// };

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
    int n=intervals.size();
    vector<vector<int>>mi;
    if(n==0){
      return mi;
    }
    sort(intervals.begin(),intervals.end());
    vector<int>tempi=intervals[0];
    for(auto it:intervals){
        if(it[0]<=tempi[1]){
            tempi[1]=max(it[1],tempi[1]);
        }
        else{
           mi.push_back(tempi);
           tempi=it;
        }
    }
    mi.push_back(tempi);
    return mi;
    }
};


