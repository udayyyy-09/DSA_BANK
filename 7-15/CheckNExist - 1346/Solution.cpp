/*

class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int n = arr.size();
        // O(N^2) -> O(N)
        unordered_set<int>st;
        for(int i= 0;i<n;i++){
            if(st.find(2*arr[i]) != st.end()|| (arr[i]%2 == 0 && st.find(arr[i]/2) != st.end())){
                return true;
            }
            st.insert(arr[i]);
        }
        return false;
    }
};

*/