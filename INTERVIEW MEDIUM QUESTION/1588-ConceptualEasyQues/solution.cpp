/*



class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        //trying brute force approach 
        int res = 0, n = arr.size();
        // for(int i =0;i<n;i++){
        //     int sum = arr[i];
        //     res += arr[i];
        //     for(int j = i+1;j<n;j++){
        //         int len = j - i + 1;
        //         sum += arr[j];
        //         if(len%2 != 0){
        //             res += sum;
        //         }
        //     }
        // }
        // return res;


        //trying optimized solution

        if(n == 1) return arr[0];
        int sum = 0;
        
        for(int i = 0;i<n;i++){
            int count = ((i+1)*(n-i) + 1)/2;
            sum += arr[i]*count;
        }
        return sum;
    }
};



*/