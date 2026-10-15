/*


class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        string res = "";
        if(sum > 9*num) return "";
        for(int i =0;i<num;i++){
            int dig = min(9, sum);
            res += '0' + dig;
            sum -= dig;
        }
        return res;
    }
};

*/