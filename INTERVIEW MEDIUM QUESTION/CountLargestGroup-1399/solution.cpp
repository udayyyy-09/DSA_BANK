/*

class Solution {
public:
    int countLargestGroup(int n) {
        if(n < 9) return n;
        int res = 0;
        unordered_map<int,int>mp;
        int maxiDigLen = 0;

        for(int i =1;i<=n;i++){
            int key = i, digSum = 0;
            while(key > 0){
                digSum += key%10;
                key /=10;
            } 
            mp[digSum]++;
            maxiDigLen = max(maxiDigLen, mp[digSum]);
        }

        for(auto &it: mp){
            //now we got the maxlen of a group ex: [1,10] is the grp size 2 so we get that maximum
            if(it.second == maxiDigLen){
                res++;
            }
        }
        return res;

    }
};

*/