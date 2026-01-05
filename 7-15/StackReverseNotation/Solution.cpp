/*

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>temp;
        // return -1;
        int ans = 0;
        for(auto &st: tokens){
            if(st != "+" && st != "/" && st !="-" && st != "*"){
                temp.push(stoi(st));  
            }else{
                int a = temp.top();
                temp.pop();
                int b = temp.top();
                temp.pop();
                int val;
                if(st == "+"){
                    val = a+b;
                }else if(st == "*"){
                    val = a*b;
                }else if(st == "-"){
                    val = b - a;
                }else{
                    val = b /a ;
                }
                temp.push(val);
            }
        }
        
        return temp.top();
    }
};

*/