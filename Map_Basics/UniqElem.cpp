/*   RETURN A ARRAY IN WHICH IT CONTAINS ONLY UNIQUE ELEMENTS
    Ex:
    input: [1, 2, 2, 3, 4, 4,5]
    output: [1, 3, 5]

To solve this problem you can use a map by storing a frequency of element after that iterate through map and check 
if(mp[nums[i]] == 1) this is the condition to add the element in the result array.
don't worry you will get the appproach immediately if you don't get the answer or approach correctly.
*/   
                                
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
vector<int> Uniqe(vector<int>& nums)   
{
    vector<int>ans;
    unordered_map<int,int>mp;         //define a map
    for(int i=0;i<nums.size();i++){
        mp[nums[i]]++;      //store the freq like 1->1 ,2->2, 3->1 ,4->2, 5->1
    }
    //Now iterate through map and check for element with freq == 1. If you get that element store them in vector

    for(auto &it : mp){    // This is how you traverse through 
        if(it.second ==1){
            ans.push_back(it.first);    //it contain two parts one for elem one for freq. 
// So if it.second ==1 mean freq is 1 we store it.first in ans means  element in ans array
            
        }
    }

    return ans;
}
int main()
{
    vector<int>nums = {1,2,1,3,3,4};      //Example array
    vector<int> res= Uniqe(nums);
    cout<<"Unique Elements: ";
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
}