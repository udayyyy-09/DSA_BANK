/*

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>res;
        int n = intervals.size();
        if(n == 1) return intervals;
        sort(intervals.begin(), intervals.end());
        int mini = intervals[0][0];
        int maxi = intervals[0][1];
        for(int i=1;i<n;i++){
            if(maxi >= intervals[i][0]){
                maxi = max(maxi, intervals[i][1]);
            }else{  
                res.push_back({mini, maxi});
                maxi = max(maxi, intervals[i][1]);
                mini = min(intervals[i][1], intervals[i][0]);
            }
            
        }
        res.push_back({mini,maxi});
        return res;
    }
};


*/