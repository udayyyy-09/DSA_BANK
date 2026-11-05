/*

    class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int maxi = *max_element(piles.begin(), piles.end());

        int st = 1;
        int res = 0;

        while(st <= maxi){
            int mid = st + (maxi - st)/2;
            long long sum = 0;
            for(int val: piles){
                sum += (val + mid - 1LL)/mid;
            }
            if(sum <= h){
                res = mid;
                maxi = mid-1;
            }else{
                st = mid+1;
            }
        }
        return res;
        
    }
};


*/