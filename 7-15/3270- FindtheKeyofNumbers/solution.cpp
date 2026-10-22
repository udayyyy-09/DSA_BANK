/*



class Solution {
public:
    int generateKey(int num1, int num2, int num3) {
        // If you want to iteratore through a number from starting then always convert it to string
        string a = to_string(num1), b =  to_string(num2), c = to_string(num3);
        int res = 0;
        int st = 0;
        // int s1 = a.size(), s2 = b.size(), s3 = c.size();
        // int temp = max(s1, s2);
        // int si = c.size();
        // int n = max(temp, si);

        //adding leading zeros to shorter size nums

        while(a.size() < 4)  a= "0" + a;
        while(b.size() < 4)  b = "0" + b;
        while(c.size() < 4)  c= "0" + c;

        while(st < 4){
            int v1 = min(a[st] - '0', b[st] - '0');
            int v2 = min(v1, c[st] - '0');

            res = res*10 + v2;
            st++;
        }
        return res;
    }
};



*/