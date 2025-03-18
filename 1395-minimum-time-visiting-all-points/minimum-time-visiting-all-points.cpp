class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int n=points.size();
        int x1=points[0][0];
        int y1=points[0][1];
        int res=0;
        for(int i=1;i<n;i++){
            int x2=points[i][0];
            int y2=points[i][1];
            res+=max(abs(x2-x1),abs(y2-y1));
            x1=x2;
            y1=y2;
        }
        return res;
        
    }
};


// class Solution {
// public:
//     int minTimeToVisitAllPoints(vector<vector<int>>& points) {
//        int n=points.size();
//        int t=0;
//        for(int i=0;i<n-1;i++){
//         vector<int>a(points[i]);
//         vector<int>b(points[i+1]);
//         int x=abs(a[0]-b[0]);
//         int y=abs(a[1]-b[1]);
//         if(x>y){
//             t+=x;
//         }
//         else{
//             t+=y;
//         }
//        }
//        return t;
//     }
// };