/*

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size(), m = nums2.size();
        vector<int>res;
        unordered_map<int,int>mp;
        stack<int>st;

        for(int val: nums2){
            while(!st.empty() && st.top() < val){
                mp[st.top()] = val;
                st.pop();
            }
            st.push(val);
        }

        for(int val: nums1){
            if(mp.find(val) != mp.end()){
                res.push_back(mp[val]);
            }else{
                res.push_back(-1);
            }
        }
        return res;
    }
};

*/