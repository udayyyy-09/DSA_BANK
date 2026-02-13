/*

class Solution {
public:
    int longestBalanced(string s) {
        int n = s.size();
        if(n == 1) return 1;
        int ans = 0;
        for(int i = 0;i<n-1;i++){
            int freq[26] = {0}, maxiFreq = 0, distinct = 0;
            for(int j = i;j<n;j++){
                int idx = s[j] - 'a';
                if(freq[idx] == 0){
                    distinct++;
                }
                freq[idx]++;
                int len = j - i +1;
                maxiFreq = max(maxiFreq, freq[idx]);
                if(maxiFreq * distinct == len) ans = max(ans,len);
            }
        }
        return ans;
        
    }
};

*/