/*


class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.size(), n2 = s2.size();
        unordered_map<char, int>mp;
        for(char c: s1){
            mp[c]++;
        }
        
        //brute force approach
        // for(int i = 0;i<n2;i++){
        //     unordered_map<char,int>temp = mp;
        //     int count = 0, j = i;
        //     while(j < n + i && temp.find(s2[j]) != temp.end() && temp[s2[j]] > 0){
        //         count++;
        //         temp[s2[j]]--;
        //         j++;
        //     }
        //     if(count == n) return true;
        // }
        // return false;

        //Optimized Approach 

        unordered_map<char,int>mp2;
        int st = 0;
        for(int i = 0;i<n2;i++){
            mp2[s2[i]]++;
            if(i - st + 1 == n){
                //this means window reach the size of s1
                if(mp == mp2) return true;
                mp2[s2[st]]--;
                if(mp2[s2[st]] == 0) mp2.erase(s2[st]);
                
                    
                st++;

            }
        
        }
        // if(mp2.size() == mp.size()) return true;
        return false;
        
    }

};


*/