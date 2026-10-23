/*


class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        unordered_map<char,int>mp;

        //In this the concept is about maxFreq and values to replacement
        int maxFreq = 0, res = 0, st = 0;

        for(int i = 0;i<n;i++){
            mp[s[i]]++;
            int len = i - st + 1;
            maxFreq = max(maxFreq, mp[s[i]]);
            int repl = len - maxFreq;

            //if repl > k then we skip it 
            while(st < n && repl >k){
                mp[s[st]]--;
                if(mp[s[st]] == 0){
                    mp.erase(s[st]);
                }
                st++;
                repl--;
            }

            res = max(res, maxFreq + repl);
        }
        return res;
      
    }

};


*/