/*



class Solution {
public:
    vector<vector<string>> wordSquares(vector<string>& words) {
        vector<vector<string>>res;
        auto store = words; 

        int n = words.size();
        for(int i = 0;i<n;i++){
            //top
        
            for(int j = 0;j<n;j++){
                //left
                if(i == j) continue;
                for(int k = 0;k<n;k++){
                    //right
                    if(k==i || k == j) continue;
                    for(int l = 0;l<n;l++){
                        //bottom
                        if(l == i || l == j || l == k) continue;
                        //checking condition i.e constraints
                        string &top = store[i];
                        string &bottom = store[j];
                        string &right = store[k];
                        string &left = store[l];

                        if(top[0] == left[0] && top[3] == right[0] && bottom[0] == left[3] && bottom[3] == right[3]){
                            res.push_back({top,left,right,bottom});
                        }
                    }
                }
            }
        }
        sort(res.begin(), res.end());
        return res;
        
    }
};


*/