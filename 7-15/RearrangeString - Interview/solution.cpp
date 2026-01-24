/*

#include<bits/stdc++.h>
using namespace std;

vector<int> helper(vector<string> nums){
    vector<int> res;
    for(string s : nums){
        int m = s.length(), maxi = 0;
        int freq[26] = {0};

        for(char c : s)
            freq[c - 'a']++;

        for(int i = 0; i < 26; i++)
            maxi = max(maxi, freq[i]);

        if(maxi > m / 2)
            res.push_back(2 * (m - maxi));
        else
            res.push_back(m);
    }

    return res;
}

int main(){
    int n;
    cin >> n;
    vector<string> st(n);

    for(int i = 0; i < n; i++)
        cin >> st[i];

    vector<int> res = helper(st);
    for(int ans : res)
        cout << ans << " ";
}

*/