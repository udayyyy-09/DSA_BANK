/*


class Solution {
public:
    string lexSmallest(string s) {
        string ans = s;
        if(s.size() == 1) return s;
        for(int i = 1;i<ans.size();i++){
            string l = s;
            reverse(l.begin(), l.begin() + i);
            if(l < ans){
                ans = l;
            }
        }
        for(int i = s.size() - 1;i>=0;i--){
            string l = s;
            reverse(l.begin() + i, l.end());
            if(l < ans){
                ans = l;
            }
        }
        return ans;
    }
};


*/