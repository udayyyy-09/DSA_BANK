/*



class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        string res = "";

        int idx = 0;
        string end = strs[strs.size()-1];
        string st = strs[0];
        while(idx < st.size() && end[idx] == st[idx]){
            res += st[idx];
            idx++;
        }
        return res;
    }
};



*/