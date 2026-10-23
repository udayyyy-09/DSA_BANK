/*


class Solution {
public:
    int minOperations(string s) {
        int n = s.size();
        if(n == 1) return 0;
        
        // if(n == 2 && ) 
        if(is_sorted(s.begin(), s.end())){
            return 0;
        }
        if(n ==2) return -1;
        char maxi = s[0], mini = s[0];


        for(char c:s){
            if(c > maxi){
                maxi = c;
            }
            if(mini > c){
                mini = c;
            }

        } 
        if(s[0] == mini || s[n-1] == maxi) return 1;
        // if(s[0] == mini && s[n-1] == maxi) return 0;

        for(int i = 1;i<n-1;i++){
            if(s[i] == mini || s[i] == maxi) return 2;
        }
        return 3;
    }
};



*/