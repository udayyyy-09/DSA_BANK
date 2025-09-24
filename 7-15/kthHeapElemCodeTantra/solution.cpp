#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> helper(vector<int> nums, vector<int> queries){
    int n = nums.size();
    priority_queue<int>pq(nums.begin(), nums.end());
    vector<int>res;
    vector<int> temp;        //to store temp pop elem from heap in order to get a kth largest elem and also we cannot use pq[i] indexing
    for(int i:queries){
        if(i > pq.size()){
            res.push_back(-1);
            continue;
        }
        for(int j=0;j<i-1;j++){
            temp.push_back(pq.top());
            pq.pop();
        }
        res.push_back(pq.top());
        pq.pop();
        for(int k:temp){
            pq.push(k);
        }
        temp.clear();
    }
    return res;
}
int main()
{
    vector<int>nums = {15,10,20,8,25,30};
    vector<int>q = {1,3,2,1};
    vector<int>res = helper(nums, q);
    for(int i: res){
        cout<<i<<endl;
    }

    return 0;
}