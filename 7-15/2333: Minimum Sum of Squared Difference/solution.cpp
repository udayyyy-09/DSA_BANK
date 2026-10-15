/*



class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1, int k2) {
        // int n = nums1.size();
        // long long ans = 0;
        // // priority_queue<pair<int, pair<int,int>>>pq;
        // priority_queue<int>pq;
        // long long opr = 1ll * (k1+k2);
        // for(int i =0;i<n;i++){
        //     int diff = abs(nums1[i] - nums2[i]);
        //     pq.push(diff);
        // }

        // while(opr > 0 && !pq.empty() && pq.top() > 0){
        //     int val = pq.top();
        //     if(opr > 0 && val > 0){
        //         val--;
        //         opr--;
        //     }
        //     pq.pop();
        //     pq.push(val);
            
        // }
        
        // while(!pq.empty()){
        //     int val = pq.top();
        //     long long res = 1ll*val*val;
        //     ans += 1ll* res;
        //     pq.pop();
        // }
        // return ans;
        // THE ABOVE APPROACH GIVES ME TLE BUT I ABLE TO THINK SOLUTION NOT 100% BUT ABLE TO THINK 90% APPROACH 

        //OPTIMIZE APPROACH(in this I am gonna use the freq and instead of reducing diff one by one, we will reduce same value in one go operaton)

        int n = nums1.size();
        long long res = 0;
        long long opr = 1ll*k1+k2;
        int maxiDiff = 0;
        vector<int>diff;
        for(int i = 0;i<n;i++){
            int dif = abs(nums1[i] - nums2[i]);
            diff.push_back(dif);
            maxiDiff = max(maxiDiff, dif);
        }

        vector<long long>freq(maxiDiff +1, 0);

        for(int val: diff){
            freq[val]++;
        }

        //Now reduce the larger differences 

        for(int i =maxiDiff;i>0 && opr > 0;i--){
            if(opr >= freq[i]){
                opr -= freq[i];
                freq[i-1] += freq[i];
                freq[i] = 0;
            }else{
                //if opr < curr freq 
                freq[i-1] += opr;
                freq[i] -= opr;
                opr = 0;
            }
        }

        for(int i =0;i<= maxiDiff;i++){
            res += freq[i]*i*i;
        }
        return res;

        
    }
};


*/