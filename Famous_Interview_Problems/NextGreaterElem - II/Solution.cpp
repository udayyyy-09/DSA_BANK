/*

class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int>res(n,-1);
    
        // Monotonic Stack Optimized Approach O(n)
        stack<int>st;
        for(int i = 0;i< 2*n ;i++){
            int idx = i%n;
            while(!st.empty() && nums[st.top()] < nums[idx]){
                res[st.top()] = nums[idx];
                st.pop();
            }
            if(idx < n){
                st.push(idx);
            }

        }
        return res;
    }
};

*/