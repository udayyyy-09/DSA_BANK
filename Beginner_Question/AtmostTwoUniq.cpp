/*LEETCODE-80                     ( https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/ )         
    RETURN TOTAL NUMBER IN WHICH IT CONTAINS ATMOST 2 DUPLICATES
    Example 1:

        Input: nums = [1,1,1,2,2,3]
        Output: 5, nums = [1,1,2,2,3,_]
        Explanation: Your function should return k = 5, with the first five elements of nums being 1, 1, 2, 2 and 3 respectively.
        It does not matter what you leave beyond the returned k (hence they are underscores).

    Approach
        My approach for this problem is very simple.
        we will just check the element's previous second number to the left. if the both elements are same then we will know that the number has been occurred atmost twice, this is because the array is already in sorted manner so we will get the right output only.
        The same method which we done for the REMOVING DUPLICATES I same method we follow here also.
        we will initialise the k =2, because it allows the element to occur twice atmost. So the first two elements are automatically considered valid, and we will start modifying the array from index 2.
        we will run a loop to check those two numbers and at the same time we will also modify the array and at last we will return the number of elements count we require.
*/
#include<iostream>
#include<vector>
using namespace std;
int atmostuniq(vector<int>& nums)   //1 1 1 2 2 3 
{
    int idx = 2;   //we will start from index 2 and 0,1 index are already fill with array 0,1 index elem
    for(int i=2;i<nums.size();i++){
        if(nums[i]!=nums[idx-2]){
            nums[idx] = nums[i];
            idx++;
        }
    }
    return idx;
}
int main()
{
    vector<int> nums= {1,1,1,2,2,2,5,5,5};
    int res = atmostuniq(nums);
    cout<<"Total elements with atmost 2 duplicates are "<<res<<endl;
}