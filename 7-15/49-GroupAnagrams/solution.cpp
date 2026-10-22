/*



class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        if(n == 0) return {{""}};

        //trying brute force approach 
        // vector<vector<string>>res;
        // vector<bool>used(n, false);
        // for(int i = 0;i<n;i++){
        //     if(used[i]) continue;

        //     vector<string>group;
        //     group.push_back(strs[i]);
        //     string first = strs[i];
        //     sort(first.begin(), first.end());
        //     used[i] = true;

        //     for(int j = i+1;j<n;j++){
        //         if(used[j]) continue;
        //         string sec = strs[j];
        //         sort(sec.begin(), sec.end());
                
        //         if(first == sec){
        //             group.push_back(strs[j]);
        //             used[j] = true;
        //         }
        //     }

        //     res.push_back(group);
        // }
        // return res;

        //optimized solution using hashmap + sorting
        vector<vector<string>>res;
        unordered_map<string, vector<string>>mp;

        for(int i = 0;i<n;i++){
            string st = strs[i];
            sort(st.begin(), st.end());
            if(mp.find(st) != mp.end()){
                mp[st].push_back(strs[i]);
                continue;
            }
            mp[st].push_back(strs[i]);
        }

        for(auto &it:mp){
            res.push_back(it.second);
        }
        return res;
    }

};


*/