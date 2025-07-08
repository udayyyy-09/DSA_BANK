#include<bits/stdc++.h>
using namespace std;
void helper(vector<vector<int>> &events){
    //sorting events based on the start time
    // for(auto &it:events){
    //     sort(it.begin(), it.end());
    //     break;
    // }
    sort(events.begin(), events.end());
}
vector<int> val(vector<vector<int>> &events){
    vector<int> temp;
    for(int i=0;i<events.size();i++){
            temp.push_back(events[i][1]);
    }
    return temp;
}

int main(){
    vector<vector<int>> events = {{1,2},{2,2},{3,3},{3,4},{3,4}};
    helper(events);
    // for(auto &it:events){
    //     for(auto &i:it){
    //         cout<<i<<" ";
    //     }
    // }
    vector<int> ans = val(events);
    for(auto &it:ans){
        cout<<it<<" ";
    }
}