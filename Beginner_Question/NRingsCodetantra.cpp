#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
#include <set>
#include <string>
using namespace std;

int helper(string s) {
	int n = s.size(), count = 0;
	if(n<=5) return 0;
	unordered_map<char,unordered_set<char>>mp;
	for(int i=0; i<n-1; i++) {
        char c = s[i];
        char rod = s[i+1];
        mp[rod].insert(c);
	}
	for(auto &it:mp){
	    if(it.second.size() >=3) count++;
	}
	return count;
}

int main() {
    string inp = "B0B6G0R6R0R6G9";
    cout<<helper(inp);
}