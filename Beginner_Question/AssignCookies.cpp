/*      Leetcode ->   455               ( https://leetcode.com/problems/assign-cookies/description/ )

        My Solution:  ( https://leetcode.com/problems/assign-cookies/solutions/6639056/beginner-approach-by-udayyyy09-avhp )

*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findContentChildren(vector<int>& g, vector<int>& s) {
    int ans = 0;
    sort(g.begin(), g.end());
    sort(s.begin(), s.end());
    int i = 0, j = 0;
    while (i < g.size() && j < s.size()) {
        if (g[i] <= s[j]) {
            ans++;
            i++; j++;
        } else {
            j++;
        }
    }
    return ans;
}

int main() {
    int n, m;
    cout << "Enter number of children: ";
    cin >> n;
    vector<int> g(n);
    cout << "Enter greed factor of children: ";
    for (int i = 0; i < n; i++) cin >> g[i];

    cout << "Enter number of cookies: ";
    cin >> m;
    vector<int> s(m);
    cout << "Enter size of cookies: ";
    for (int i = 0; i < m; i++) cin >> s[i];

    int result = findContentChildren(g, s);
    cout << "Maximum content children: " << result << endl;

    return 0;
}
