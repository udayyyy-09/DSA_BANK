//                       INSERT A ELEMENT AT SPECIFIC POSITION WITHOUT REMOVE THAT ELEMENT 
#include<iostream>
#include<vector>
using namespace std;
vector<int> insertwithoutrem(vector<int>&nums, int val,int pos)    //1 2 4 3 2 5
{
    if(pos>nums.size())
    {
        cout<<"No element to insert"<<endl;
    }
    nums.resize(nums.size()+1);

    int n = nums.size()-1;
    for(int i = n;i>pos;i--)
    {
        nums[i]=nums[i-1];      // if we do a[i]=a[i+1] then it means we are shifting to left as loop starts from i=n
    }
    nums[pos]=val;

    return nums;
}
int main()
{
    vector<int>a  ={1,2,4};
    cout<<"Array before inserting: ";
    for(int l:a)
    {
        cout<<l<<" ";
    }
        vector<int> res = insertwithoutrem(a,10,0);
        cout<<"\n";
    cout<<endl<<"Array after inserting: ";
    for(int i:res)
    {
        cout<<i<<" ";
    }
}