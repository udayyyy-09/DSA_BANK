/*

class LRUCache {
public:
    int cap;
    list<pair<int,int>>lst;
    unordered_map<int, list<pair<int,int>>:: iterator> mp;

    LRUCache(int capacity) {
        cap = capacity;    
    }
    
    int get(int key) {
        if(mp.find(key) != mp.end()){
            auto &it = mp[key];
            int val = it->second;
            lst.erase(it);
            lst.push_front({key, val});
            mp[key] = lst.begin();
            return val;
        }
        return -1;
        
    }
    
    void put(int key, int value) {
        if(mp.find(key) != mp.end()){
            auto it = mp[key];
            int val = it->second;
            lst.erase(it);
            lst.push_front({key, value});
            mp[key] = lst.begin();
        }
        if(mp.size() >= cap && mp.find(key) == mp.end()){
            // auto it = mp[lst.back().first];
            mp.erase(lst.back().first);
            lst.pop_back();
        }
        if(mp.find(key) == mp.end()){
            lst.push_front({key, value});
            mp[key] = lst.begin();
        }
    }
};



 */