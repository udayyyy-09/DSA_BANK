/*


class Solution {
public:
    int atMostHelper(vector<int>& nums, int k){
        int n = nums.size(), st = 0, count = 0, res = 0;

        for(int i = 0;i<n;i++){
            if(nums[i] %2 !=0){
                count++;
            }
            while(st < n && count > k){
                if(nums[st] %2 !=0){
                    count--;
                }
                st++;
            }  

            res += (i - st + 1);
            
        }

        // if(count == k) res++;
        return res;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n = nums.size(), count = 0, sum = 0;
        unordered_map<int,int>mp;
        mp[0] = 1;
        for(int i = 0;i<n;i++){
            if(nums[i] %2 != 0){
                sum++;
            }
            if(mp.find(sum -k) != mp.end()){
                count += mp[sum-k];
            }
            mp[sum]++;
        }
        return count;
    }
};


*/