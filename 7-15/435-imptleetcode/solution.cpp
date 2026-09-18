/*

class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int n = intervals.size(), count = 0;
        //first I will sort it by the end of time 
        auto comp = [&] (vector<int> a, vector<int> b){
            return a[1]<b[1];
        };
        sort(intervals.begin(),intervals.end(),comp);
        int maxi = intervals[0][1];
        for(int i = 1;i<n;i++){
            if(intervals[i][0] < maxi){
                count++;
            }else{maxi = max(maxi,intervals[i][1]);}
        }
        return count;
        
    }
};

*/