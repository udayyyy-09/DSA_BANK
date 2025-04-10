/*    Leetcode -> 506      ( https://leetcode.com/problems/relative-ranks/description/?envType=problem-list-v2&envId=heap-priority-queue )

    My Appproach:
        To Get simple and beginner approach refer my solution given below
        ( https://leetcode.com/problems/relative-ranks/solutions/6635125/simple-beginner-approach-by-udayyyy09-6ddo )

*/

#include<bits/stdc++.h>
using namespace std;

vector<string> findRelativeRanks(vector<int>& score) {
    vector<string>res;
    vector<int>temp(score.begin(), score.end());
    unordered_map<int,string>mp;
    sort(temp.begin(), temp.end(), greater<int>());
    int pos = 1;
    for(int i:temp){
        if(pos ==1 ){
            mp.insert({i, "Gold Medal"});
        }else if(pos ==2 ){
            mp.insert({i, "Silver Medal"});
        }else if(pos == 3){
            mp.insert({i, "Bronze Medal"});
        }else{
            mp.insert({i, to_string(pos)});
        }
        pos++;

    }
    for(int i: score){
        res.push_back(mp[i]);
    }
    return res;
}
int main(){
    int n;
    cout<<"Enter size: ";
    cin>>n;
    vector<int>score(n);
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++){
        cin>>score[i];
    }
    vector<string>res = findRelativeRanks(score);
    for(string s:res){
        cout<<s<<", ";

    }
}