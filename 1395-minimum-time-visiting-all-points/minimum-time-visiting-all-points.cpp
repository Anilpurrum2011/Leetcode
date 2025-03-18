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