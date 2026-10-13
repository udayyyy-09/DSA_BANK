/*



class Solution {
public:
    int minInsertions(string s) {
        int n = s.size(), open = 0, closed = 0;
        
        for(int i = 0;i<n;i++){
            if(s[i] == '('){
                open++;
            }else{
                if(i + 1 < n && s[i+1] == ')'){
                    i++;
                }else{
                    closed++;
                }

                if(open > 0){
                    open--;
                }else{
                    closed++;
                }
            }
            
        }
        closed += open*2;

        return closed;
    }
  
};



*/