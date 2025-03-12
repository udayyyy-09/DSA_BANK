//                                     RETURN A ARRAY IN WHICH IT CONTAINS ONLY UNIQUE ELEMENTS
#include<iostream>
#include<vector>
using namespace std;
vector<int> Uniqe(vector<int>& v)   //1 1 1 2 2 3         1 2 2 3
{
    vector<int>ans;
    for(int i=0;i<v.size();i++)
    {
        bool found = true;
        int j =i+1;
        while(v[i]==v[j] && j<v.size())
        {
            j++;
            found = false;
        }
        if(found)
        {
            ans.push_back(v[i]);
        }else{
            i=j-1;
        }

    }
    return ans;
}
int main()
{
    vector<int>a = {1,1,3,3};
    vector<int> res= Uniqe(a);
    for(int i:res)
    {
        cout<<i<<" ";
    }
}