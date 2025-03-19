/*     Leetcode -> 349  (https://leetcode.com/problems/intersection-of-two-arrays)
       COMMON ELEMENT FROM TWO ARRAYS
       IN THIS QUESTION WE HAVE TO FIND COMMON ELEMENT FROM TWO ARRAYS AND AFTER FINDING YOU HAVE TO RETURN THAT ELEMENT

*/
#include<iostream>
#include<vector>
using namespace std;
int commonelem(vector<int>v1, vector<int>v2)
{
    int l = 0;
    int r=0;
    while(l<v1.size() && r<v2.size())
    {
        if(v1[l]>v2[r])
        {
            r++;
        }else if(v1[r]>v2[l])
        {
            l++;
        }else{
            return v1[l];
        }
    }
    return -1;
}
int main(){
    vector<int>a ={1,3,5,8};
    vector<int>b = {4,7,2,1};
    int res = commonelem(a,b);
    cout<<"Common element: "<<res;
}