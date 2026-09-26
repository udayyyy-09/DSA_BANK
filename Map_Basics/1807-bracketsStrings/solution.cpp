/*

class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        int n = knowledge.size();
        unordered_map<string,string>mp;
        for(int i =0;i<n;i++){
            mp[knowledge[i][0]] = knowledge[i][1];
        }
        string res = "";
        for(int i =0;i<s.size();i++){
            if(s[i] == '('){
                int j = i+1;
                string word = "";
                while(j < s.size() && s[j] != ')'){
                    word += s[j];
                    j++;
                }
                if(mp.find(word) != mp.end()){
                    res += mp[word];
                }else{
                    res += "?";
                }
                i = j;
            }else{
                res += s[i];
            }
        }
        return res;
    }
};

*/