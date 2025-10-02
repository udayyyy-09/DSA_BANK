/*

class Solution {
public:
    string sortVowels(string s) {
        string ans = "";
        set<char>st = {'a','e','i','o','u','A','E','I','O','U'};
        string vowel = "";
        for(char c:s){
            if(st.find(c) != st.end()){
               vowel += c;
            }
        }
        sort(vowel.begin(),vowel.end());
        int str = 0;
        for(char c:s){
            if(st.find(c) == st.end()){
                ans += c;
            }else{
                ans += vowel[str];
                str++;
            }
        }
        return ans;
    }
};

*/