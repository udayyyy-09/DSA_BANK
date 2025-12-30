/*

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        int n = nums1.size(), m = nums2.size();
        // return {};
        //1st appraoch O(n*m) write by my own in 10mins lesser;
        // for(int i = 0;i<n;i++){
        //     int j = 0, size = res.size();
        //     while(nums1[i] != nums2[j]){
        //         j++;
        //     }
        //     while(j < m){
        //         if(nums1[i] < nums2[j]){
        //             res.push_back(nums2[j]);
        //             break;
        //         }
        //         j++;
        //     }
        //     if(res.size() == size) res.push_back(-1);
            
        // }

        //finding O(n+m) approach
        stack<int>st;
        unordered_map<int,int>mp;
        for(int val : nums2){
            while(!st.empty() && val > st.top()){
                mp[st.top()] = val;
                st.pop();
            }
            if(!st.empty() && val < st.top()) mp[st.top()] = -1;
            st.push(val);
        }
        mp[nums2[m-1]] = -1;
        for(int val: nums1){
            if(mp.find(val) != mp.end()){
                res.push_back(mp[val]);
            }
        }
        return res;
    }
};

*/