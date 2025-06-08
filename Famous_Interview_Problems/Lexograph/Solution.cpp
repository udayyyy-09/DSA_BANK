#include<bits/stdc++.h>
using namespace std;

class UnionFind{
    vector<int>root;
    public:
        UnionFind(int n):root(n){
            iota(root.begin(),root.end(),0);
        }
        int Find(int x){
            //This function is used to find the representative smallest in lexo order from union grp
            if(x == root[x]){
                return x;
            }else{
                root[x] = Find(root[x]);
            }
            return root[x];
        }
        void Union(int x,int y){
            //this function is used to group equivalence char togethor in group
            x = Find(x), y = Find(y);
            if(x == y){
                return;
            }else if(x>y){
                root[x] = y;
            }else{
                root[y] = x;
            }
        }
};

string smallestEquivalentString(string& s1, string& s2, string& baseStr) {
    UnionFind uf(26);
    int m = baseStr.size();
    string ans(m,' ');
    for(int i=0;i<s1.size();i++){
        //group both string accordting to their equivalence p = m a = o etc
        uf.Union(s1[i] - 'a', s2[i]- 'a');
    }
    for(int i=0;i<m;i++){
        //after grouping we are going to find the representative with smallest lexo order
        ans[i] = 'a' + uf.Find(baseStr[i] - 'a');
    }
    return ans;
    
}
int main(){
    string s1 = "abc";
    string s2 = "bcd";
    string baseStr = "ab";
    cout<<smallestEquivalentString(s1,s2,baseStr);
}