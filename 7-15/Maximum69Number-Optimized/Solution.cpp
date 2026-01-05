/*

class Solution {
public:
    int maximum69Number (int num) { 
        if(num == 6) return 9;
        int pos = -1;
        int idx = 0;
        int n = num;
        int val = 0;
        while(n!=0 ){
            val = val*10 + n%10;
            if(n%10 == 6){
                pos = idx;
            }
            n = n/10;
            idx++;
        }
        if(pos == -1) return num;
        return num + 3*pow(10,pos);

    }
};

*/