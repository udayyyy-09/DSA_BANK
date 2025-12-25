/*

class Solution {
public:
    int smallestRepunitDivByK(int k) {
        if(k == 1) return 1;
        long long num = 1, minilen = LONG_MAX, len = 1, rem = 1;
        // unordered_map<int,int>mp;
        for(int i=0;i<k;i++){
            if(rem%k == 0){
                minilen = min(minilen , len);
            }
            rem = (rem*10+1)%k;
            len++;
        }
        return (minilen == LONG_MAX) ? -1: minilen;
    }
};


*/