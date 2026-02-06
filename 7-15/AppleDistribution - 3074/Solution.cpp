/*


class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int n = apple.size(), m = capacity.size();
        int sum = 0;
        for(int val: apple){
            sum += val;
        }
        sort(capacity.begin(), capacity.end());

        int j = m-1, total = 0, ans = 0;
        while(j>=0 && total < sum){
            ans++;
            total += capacity[j];
            // if()
            j--;
        }
        return ans;
        
    }
};

*/