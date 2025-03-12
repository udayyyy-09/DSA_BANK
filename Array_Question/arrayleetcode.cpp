//QUESTION-> 1
//153. Find Minimum in Rotated Sorted Array
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int findrot(vector<int>&nums)
// {
//     int mins = nums[0];
//     int s=0; int e=nums.size()-1;                        //3,4,5,1,2
//     while(s<=e)
//     {
//         if(nums[s]<nums[e])
//         {
//             mins=min(mins,nums[s]);
//             break; 
//         }
//         //if above loop don't execute update the min
//         int m = s+(e-s)/2;
//         mins=min(mins,nums[m]);
//         if(nums[s]>nums[e])
//         {
//             s=m+1;
//         }else{
//             e=m-1;
//         }
//     }
//     return mins;
// }
// int main()
// {
//     vector<int>v={3,4,5,1,2};
//     vector<int>v2={11,12,14,15};
//     int val = findrot(v2);
//     cout<<"Minimum value: "<<val;
// }
//THIS CODE WORKS ONLY WHEN ARRAY DOES NOT INCLUDE DUPLICATES....FOR DUPLICATES THERE IS LITTLE CODE DO YOURSELF
// //---------------------------------------------------------------------------------------------------------------------------------
// //QUESTION-> 2
                    //  153. CHECK IF ARRAY IS Rotated AND Sorted Array OR NOT!!!
// #include<iostream>
// #include<vector>
// // #include<algorithm>
// using namespace std;
// bool findrot(vector<int>&nums)
// {
//     //int temp = nums[0];   
//     //edge cases
//     if(nums.size()==0|| nums.size()==1)
//     {
//         return true;
//     }                    //3,4,5,1,2
//     int rotatepoint =0;
//     for(int i=0;i<nums.size();i++)
//     {
//         if(nums[i]>nums[(i+1)%nums.size()])
//         {
//             rotatepoint++;
//         }
//     }
//     if(rotatepoint>1)
//     {
//         return false;
//     }
//     return true;
// }
// int main()
// {
//     vector<int>v={3,1,0};
//     vector<int>v2={11,10,9,15};
//     bool found = findrot(v);
//     if(found)
//     {
//         cout<<"Yes,Array is rotate and sorted";
//     }else{
//        cout<<"No,Array is not rotated";
//     }
// }
//---------------------------------------------------------------------------------------------------------------------------------
//QUESTION-> 2
//15                                                        3 SUM PROBLEM==0
/*EXPLAIN-->IN THIS QUES I AM GOING TO USE THREE POINTERS TO GET TRIPLETS.I AM GOING TO SORT THE ARRY AND DEFINE A THIRD POINTER K=N-1;
AND DESGIN A FOR LOOP START FROM -4(AFTER SORTING) WE HAVE TO KEEP -4 CONSTAND AND MOVE OTHER POINTERS AND DEFINE SOME COND. IF(SUM<0)LIKE THIS
SUPPOSE ARRAY IS -1-1-1 2 4 6 i IS AT -1 j=-1 k=6 IF WE GET ZERO j and k MOVE FORWARD WHILE THIS WE HAVE TO KEPT IN MIND IF THERE IS nums REPEATING
WE HAVE TO LEAVE THAT BECAUSE WE WANT UNIQYE TRIPLETS*/
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// vector<vector<int>> threeSum(vector<int>& nums)            //[-1,0,1,2,-1,-4]
// //the provided example we have to return triplets and there is no duplicate of triplet
// {
//     //In 2 sumprblm we have to keep mind of index but there is no need in 3 sum
//     vector<vector<int>>res;
//     sort(nums.begin(),nums.end());
//     for(int i=0;i<nums.size();i++)
//     {
//         if(i>0 && nums[i]==nums[i-1]) continue;
//         int j=i+1;  int k=nums.size()-1;
//         while(j<k)
//         {
//             int sum = nums[i]+nums[j]+nums[k];
//             if(sum<0)
//             {
//                 j++;
//             }else if(sum>0)
//             {
//                 k--;
//             }else{
//                 //define a vector and add tripltes
//                 vector<int>temp = {nums[i],nums[j],nums[k]};
//                 //add  vector in another vector res
//                 res.push_back(temp);
//                 j++;
//                 k--;
//                 //check for uniqness
//                 while(j<k && nums[j]==nums[j-1])  j++;
//                 while(j<k && nums[k]==nums[k+1])  k--;
//             }
//         }

//     }
//     return res;
    
// }
// int main()
// {
//     vector<int> v = {-1, 0, 1, 2, -1, -4};
//     vector<vector<int>> val = threeSum(v);
//     for (const auto& triplet : val) {
//         for (int num : triplet) {
//             cout << num << " ";
//         }
//         cout << endl;
//     }
// }
//----------------------------------------------------------------------------------------------------------------------------------------------
//                                          BELOW IS MY BRUTE FORCE APPROACH BUT IT TAKINGS REPETION
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// vector<vector<int>> threeSum(vector<int>& nums)   //vector in vector class
// {
//     vector<vector<int>> res;
//     sort(nums.begin(),nums.end());
//     for(int i=0;i<nums.size()-2;i++)
//     {
//         if(i>0 && nums[i]==nums[i-1]) continue;
//         for(int j=i+1;i<nums.size()-1;i++)
//         {
//             if(j>i+1 && nums[j]==nums[j-1]) continue;
//             for(int k=j+1;k<nums.size();k++)
//             {
//                 if(k>j+1 && nums[k]==nums[k-1]) continue;
//                 int sum = nums[i]+nums[j]+nums[k];
//                 {
//                     if(sum==0)
//                     {
//                         vector<int>t ={nums[i],nums[j],nums[k]};
//                         res.push_back(t);
//                     }
//                 }
//             }
//         }
//     }
//     return res;
// }
// int main()
// {
//     vector<int>v = {-1,0,1,2,-1,-4};
//     vector<vector<int>> num = threeSum(v);
//     for(const auto& n:num)
//     {
//         for(int l:n)
//         {
//             cout<<l<<" ";
//         }
//         cout<<endl;
//     }
// }
//---------------------------------------------------------------------------------------------------------------------------------
//QUESTION-> 3
//1                                                    TWO SUM PROBLEM
/*EXPLAIN-->IN THIS QUES I AM GOING TO USE TWO POINTERS TO GET INDICES.IN LEETCODE ANSWER ARE GIVEN AFTER SORTING BUT WE DON'T KNOW BEFORE IT
WE HAVE TO SWAP OR NOT*/
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// vector<int> TwoSum(vector<int>& nums,int target)            //[3,4,2]
// //the provided example we have to return the indices answer is 1,2  
// {
//     //by applying brute force approach we can use two loops by keeping nums[0]constant and traverse all element except nums[0] but tcO(N^2)
//     //to keep maintain their original indices we are going to use pairs
//     vector<pair<int,int>>num;
//     for(int i=0;i<nums.size();i++)
//     {
//         num.push_back({nums[i],i});
//     }
//     sort(num.begin(),num.end());
//     //defining two pointer
//     int s=0; int e=num.size()-1;
//     while(s<e)
//     {
//         int sum = num[s].first+num[e].first;
//         if(sum<target)
//         {
//             s++;
//         }else if(sum>target)
//         {
//             e--;
//         }else
//         {
//             return {num[s].second,num[e].second};
//         }
//     }
//     return {-1,-1};
    
// }
// int main()
// {
//     vector<int> v = {3,4,2};
//     vector<int>n = TwoSum(v,8);
//     for(int s:n)
//     {
//         cout<<s<<" ";
//     }
// }
//--------------------------------------------------------------------------------------------------------------------------------------
//QUESTION-->4 
//                                REVERSE THE ARRAY BETWEEN LEFT AND RIGHT
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// vector<int> reversebet(vector<int> &v,int l, int r)      // 1,2,3,4,5
// {
//     // vector<int>s;
//     int i=l-1;
//     int j = r;
//     reverse(v.begin()+i,v.begin()+j);
//     return v;
// }
// int main()
// {
//     vector<int>s = {1,2,3,4,5};
//     vector<int>n = reversebet(s,3,5);
//     for(int k:n)
//     {
//         cout<<k<<" ";
//     }
// }
//--------------------------------------------------------------------------------------------------------------------------------------
//                                                  LEETCODE QUES->66
//                          PULS ONE AT LAST nums OF ARRAY EX-> [1,2,3] = [1,2,4];
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// vector<int> plusone(vector<int>&nums)
// {
    // reverse(nums.begin(),nums.end());
    // int carry =1;
    // vector<int>v;
    // for(int i=0;i<nums.size();i++)
    // {
    //     int sum =nums[i]+carry;
    //     if(sum<=9)
    //     {
    //         nums[i]=sum;
    //         reverse(nums.begin(),nums.end());
    //         return nums;
    //         break;
    //     }
    //     carry=sum/10;
    //     if(sum>=10)
    //     {
    //         v.push_back(sum%10);
    //     }
    // }
    // if(carry>=1)
    //     {
    //         v.push_back(carry);
    //         carry=0;
    //     }
    // reverse(v.begin(),v.end());
    // return v;
    
//     //WE CAN ALSO DO THIS QUES BY USING REVERSE LOOP
//     int carry=1;
//     int n = nums.size();
//     for(int i = n-1;i>=0;i--)
//     {
//         int sum = nums[i]+carry;
//         if(sum<=9)
//         {
//             nums[i]=sum;
//             return nums;
//         }
//         carry = sum/10;
//         nums[i] = sum%10;
//     }
//     if(carry)
//     {
//         nums.insert(nums.begin(),carry);
//     }
//     return nums;
// }
// int main()
// {
//     vector<int>a ={8,9};
//     vector<int> b=plusone(a);
//     for(int i:b)
//     {
//         cout<<i<<" ";
//     }
// }
// //-----------------------------------------------------------------------------------------------------------------------------------------------------
//                                      RETURN A ARRAY IN WHICH IT CONTAINS ATMOST 2 DUPLICATES
// #include<iostream>
// #include<vector>
// using namespace std;
// vector<int> atmostuniq(vector<int>& v)   //1 1 1 2 2 3 
// {
//     int idx = 2;
//     for(int i=2;i<v.size();i++)
//     {
//         if(v[i]!=v[idx-3])
//         {
//             v[idx] = v[i];
//             idx++;
//         }
//     }
//     v.resize(idx);
//     return v;
// }
// int main()
// {
//     vector<int> s= {1,1,1,2,2,2,5,5,5,5,5,5};
//     vector<int> res = atmostuniq(s);
//     for(int i:res)
//     {
//         cout<<i<<" ";
//     }
// }
//-----------------------------------------------------------------------------------------------------------------------------------------------------
//                                      RETURN A ARRAY IN WHICH IT CONTAINS ONLY UNIQUE ELEMENTS
// #include<iostream>
// #include<vector>
// using namespace std;
// vector<int> Uniqe(vector<int>& v)   //1 1 1 2 2 3         1 2 2 3
// {
//     vector<int>a;
//     for(int i=0;i<v.size();i++)
//     {
//         bool found = true;
//         int j =i+1;
//         while(v[i]==v[j] && j<v.size())
//         {
//             j++;
//             found = false;
//         }
//         if(found)
//         {
//             a.push_back(v[i]);
//         }else{
//             i=j-1;
//         }

//     }
//     return a;
// }
// int main()
// {
//     vector<int>a = {1,1,3,3};
//     vector<int> res= Uniqe(a);
//     for(int i:res)
//     {
//         cout<<i<<" ";
//     }
// }
//-------------------------------------------------------------------------------------------------------------------------------------------
//                                  INSERT A ELEMENT AT SPECIFIC POSITION AND REMOVE THAT ELEMENT and return an array
// #include<iostream>
// #include<vector>
// using namespace std;
// vector<int> insert(vector<int>&nums, int val,int pos)    //1 2 4 3 2 5
// {
//     if(pos>nums.size())
//     {
//         cout<<"No element to insert"<<endl;
//     }
//     for(int i=0;i<nums.size();i++)
//     {
//         if(i==(pos-1))
//         {
//             nums[i]=val;
//         }
//     }
//     return nums;
// }
// int main()
// {
//     vector<int>a  ={1,2,4,5,2,3};
//     cout<<"Array before inserting: ";
//     for(int l:a)
//     {
//         cout<<l<<" ";
//     }
//         vector<int> res = insert(a,10,3);
//         cout<<"\n";
//     cout<<endl<<"Array after inserting: ";
//     for(int i:res)
//     {
//         cout<<i<<" ";
//     }
// }
//-------------------------------------------------------------------------------------------------------------------------------------------
//                                  INSERT A ELEMENT AT SPECIFIC POSITION WITHOUT REMOVE THAT ELEMENT and return an array
// #include<iostream>
// #include<vector>
// using namespace std;
// vector<int> insertwithoutrem(vector<int>&nums, int val,int pos)    //1 2 4 3 2 5
// {
//     if(pos>nums.size())
//     {
//         cout<<"No element to insert"<<endl;
//     }
//     nums.resize(nums.size()+1);

//     int n = nums.size()-1;
//     for(int i = n;i>pos;i--)
//     {
//         nums[i]=nums[i-1];      // if we do a[i]=a[i+1] then it means we are shifting to left as loop starts from i=n
//     }
//     nums[pos]=val;

//     return nums;
// }
// int main()
// {
//     vector<int>a  ={1,2,4};
//     cout<<"Array before inserting: ";
//     for(int l:a)
//     {
//         cout<<l<<" ";
//     }
//         vector<int> res = insertwithoutrem(a,10,0);
//         cout<<"\n";
//     cout<<endl<<"Array after inserting: ";
//     for(int i:res)
//     {
//         cout<<i<<" ";
//     }
// }
//------------------------------------------------------------------------------------------------------------------------------------------
//                          YOU HAVE PROVIDED ARRAY(WITH DUPLICATES).YOU HAVE TO RETURN THE INTEGER WHICH IS REPEATED  MAXIMUN TIMES                
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int maxDup(vector<int> nums)         //1 2 2 1 1 3 4 4 2 2     
// {
    // //brute force sol
    // int maxcount=0;
    // int maxi = nums[0];
    // for(int i=0;i<nums.size()-1;i++)
    // {
    //     int count=1;
    //     for(int j=0;j<nums.size();j++)
    //     {
    //         if(i!=j && nums[i]==nums[j]) count++;
    //     }
    //     if(count>maxcount)
    //     {
    //         maxcount = count;
    //         maxi = nums[i];
    //     }
    // }
    // return maxi;
//     int candidate;
//     int count=0;
//     for(int i=0;i<nums.size();i++)
//     {
//         if(count==0)
//         {
//             count++;
//             candidate=nums[i];
//         }else if(candidate == nums[i])
//         {
//             count++;
//         }else{
//             count--;
//         }
//     }
//     count=0;
//     for(int t:nums)
//     {
//         if(t==candidate) count++;
//     }
//     if(count>nums.size()/2)
//     {
//         return candidate;
//     }else{
//         return 0;
//     }

// }
// int main()
// {
//     vector<int>a  ={1,3,3,3,3,1,2,3};
//     int res = maxDup(a);
//     cout<<res;
// }
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------
//                            FIND COMMON ELEMENT FROM TWO ARRAYS
// #include<iostream>
// #include<vector>
// using namespace std;
// int commonelem(vector<int>v1, vector<int>v2)
// {
//     int l = 0;
//     int r=0;
//     while(l<v1.size() && r<v2.size())
//     {
//         if(v1[l]>v2[r])
//         {
//             r++;
//         }else if(v1[r]>v2[l])
//         {
//             l++;
//         }else{
//             return v1[l];
//         }
//     }
//     return -1;
// }
// int main(){
//     vector<int>a ={1,3,5,8};
//     vector<int>b = {4,7,2,1};
//     int res = commonelem(a,b);
//     cout<<"Common element: "<<res;
// }
//--------------------------------------------------------------------------------------------------------------------------------------------------------
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int maxprod(vector<int>nums, int k)
// {
//     //BRUTE FORCE APPROACH approach
//     if(nums.size()==3)
//     {
//         return nums[0]*nums[1]*nums[2];
//     }
//     int maxi=0;
//     // for(int i=0;i<nums.size()-k;i++)
//     // {
//     //     int prd = 1;
//     //     for(int j=i;j<i+k;j++)
//     //     {
//     //         prd  *= nums[j];
//     //     }
//     //     maxi = max(prd,maxi);
//     // }
//     // return maxi;

// //                    OPTIMAL APPROACH
    
// }
// int main()
// {
//     vector<int>a ={5,4,9,6,4};
//     int res = maxprod(a,3);
//     cout<<res;
// }
//--------------------------------------------------------------------------------------------------------------------------------------------------------
// #include <iostream>
// #include <vector>
// #include <algorithm>  // for the max function

// using namespace std;

// int longestSubarrayWithSumK(vector<int>& nums, int k) {
//     int n = nums.size();
//     int maxLength = 0;
    
//     // Loop to set the starting point of the subarray
//     for (int i = 0; i < n; ++i) {
//         int sum = 0;
        
//         // Loop to set the ending point of the subarray
//         for (int j = i; j < n; ++j) {
//             sum += nums[j];
            
//             // If the sum of the subarray from i to j is equal to k
//             if (sum == k) {
//                 maxLength = max(maxLength, j-i+1);
//             }
//         }
//     }
    
//     return maxLength;
// }

// int main() {
//     vector<int> a = {1,2,3,4,5};
//     int k = 10;
//     int res = longestSubarrayWithSumK(a, k);
//     cout << "The length of the longest subarray with sum " << k << " is " << res << endl;
//     return 0;
// }
//----------------------------------------------------------------------------------------------------------------------------------------------------
//                                                  DELETE THE MIDDLE ELEMENT IN ARRAY WITHOUT TAKING VECTORS
// #include<iostream>
// using namespace std;
// void delmiddle(int arr[], int n)
// {
//         int m = n/2;
//     for(int i= m;i<n;i++)
//     {
//         arr[i] = arr[i+1];
//     }
//     for(int i=0;i<n-1;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }
// int main()
// {
//     int size = 10;
//     int arr[size];
//     cout<<"Enter elements: ";
//     int i = 0;
//     while(i<size)
//     { 
//         cin>>arr[i];
//         i++;
//     }
//     cout<<endl<<"After deleting middle element ";
//     delmiddle(arr,size);
// }
//--------------------------------------------------------------------------------------------------------------------------
/*QUESTION - Given an array of N integers, and an integer K, find the number of pairs of elements in the array 
whose sum is equal to K.
}*/
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int sumpair(vector<int> &nums,int k)
// {
//     sort(nums.begin(),nums.end());
//     int n  = nums.size();
//     int count = 0;
//     // brute force approach
//     // for(int i=0;i<n-1;i++)
//     // {
//     //     for(int j = i+1;j<n;j++)
//     //     {
//     //         int sum  = nums[i]+nums[j];
//     //         if(sum == k)
//     //         {
//     //             count++;
//     //         }
//     //     }
//     // }
//     //                  OPTIMAL APPROACH
//     int slow = 0;
//     int fast = n-1;
//     while(slow<=fast)
//     {
//         int sum = nums[slow]+nums[fast];
//         if(sum<k)
//         {
//             slow++;
//         }else if(sum>k)
//         {
//             fast--;
//         }else{
//             count++;
//             slow++;
//             fast--;
//         }
//     }
//     return count;
// }
// int main()
// {
//     vector<int> a = {1,2,2,3};
//     int res = sumpair(a,5);
//     cout<<"Number of pairs whose sum is equal to k: "<<res;
// }
// // ------------------------------------------------------------------------------------------------------------------------------------
// //                                                  CONTAINS DUPLICATE  QUES(219)
// // Given an integer array nums and an integer k, return true if there are two distinct indices i and j in the array such that nums[i] == nums[j] and abs(i - j) <= k.
// #include<iostream>
// #include<vector>
// #include<unordered_set>
// #include<set>
// using namespace std;
// bool containsNearbyDuplicate(vector<int>& nums, int k)
// {
//     // By brute force it is very easy ques but for optimal approach I have to learn about more deep sets
//     set<int>s;
//     // ṣets contains the unique element first I take one element from arr and add it to set then 2nd and check if 2nd elem == present in set
// //and check abs(i-j)<=k check for window size if it under k return true then false
//     for(int i=0;i<nums.size();i++)
//     {
//         if(s.count(nums[i]))
//         {
//             return true;
//         }
//         // insert the elem into set
//         s.insert(nums[i]);
//         // check for window size
//         if(s.size()>k)
//         {
//             s.erase(nums[i-k]);
//         }
//     }
//     return false;
// }
// int main()
// {
//     vector<int>a = {1,2,3,1,2,3};
//     bool f = containsNearbyDuplicate(a,2);
//     cout<<boolalpha<<f;
// }
// ------------------------------------------------------------------------------------------------------------------------------------
//                                           SEARCH IN ROTATED SORTED ARRAY
//iven the array nums after the possible rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.
// #include<iostream>
// #include<vector>
// using namespace std;
// int search(vector<int>& nums, int target) {
//         int st = 0;
//         int end = nums.size()-1;
//         while(st<=end)
//         {
//             int m = st+(end-st)/2;
//             if(nums[m]==target)
//             {
//                 return m;
//                 break;
//             }
//             if(nums[st]<=nums[m])
//             {
//                 if(nums[st]<=target && nums[m]>target)
//                 {
//                     end = m-1;
//                 }else{
//                     st = m+1;
//                 }
//             }else{
//                 if(nums[st]<target && target<nums[end])
//                 {
//                     st = m+1;
//                 }else{
//                     end = m-1;
//                 }
//             }
//         }
//         return -1;
        
//     }
// int main()
// {
//     vector<int>a = {3,4};
//     int res = search(a,3);
//     cout<<res;
// }
// ------------------------------------------------------------------------------------------------------------------------------------
//                                      NOW BY MODIFYING ABOVE QUES NOW WE HAVE DUPLICATES VALUES IN IT.
// #include<iostream>
// #include<vector>
// using namespace std;
// bool search(vector<int>& nums, int target) {
//         int st = 0;
//         int end = nums.size()-1;
//         while(st<=end)
//         {
//             int m = st+(end-st)/2;
//             if(nums[m]==target)
//             {
//                 return true;
//                 break;
//             }
//             if(nums[st]==nums[m] && nums[m]==nums[end])
//             {
//                 st++;
//                 end--;
//             }
//             if(nums[st]<=nums[m])
//             {
//                 if(nums[st]<=target && target<nums[m])
//                 {
//                     end = m-1;
//                 }else{
//                     st = m+1;
//                 }
//             }else{
//                 if(nums[m]<target && target<=nums[end])
//                 {
//                     st = m+1;
//                 }else{
//                     end = m-1; 
//                 }
//             }    
//         }
//         return false;   
//     }
// int main()
// {
//     vector<int>a = {4,4,4,4,4,4,4,4,2,1,1,1,1};
//     bool res = search(a,1);
//     cout<<boolalpha<<res;
// }
// //-------------------------------------------------------------------------------------------------------------------------------------------
// #include<iostream>
// #include<vector>
// using namespace std;
// int singleNonDuplicate(vector<int>& nums) {
//         int st = 0;
//         int end = nums.size()-1;
//         int ans;
//         while(st<=end){
//             int m = st+(end-st)/2;
//             if((m&1)==0){
                
//             }
//         }
// }           
// int main(){
//     vector<int>v ={3,3,7,7,10,11,11};
//     int a = singleNonDuplicate(v);
//     cout<<a<<endl;
// }
// //-------------------------------------------------------------------------------------------------------------------------------------------
// //                                          CONVERT 1D TO 2D ARRAY
// #include<iostream>
// #include<vector>
// using namespace std;
// vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
//     int s = original.size();
//     if((m*n)<s){
//         return {};
//     }
//     vector<vector<int>>v(m,vector<int>(n));  //creating a 2d vector with each row contain the pairs of vector
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             v[i][j] = original[n*i+j];
//         }
//     }
//     return v;
// }           
// int main(){
//     vector<int>v ={1,2,3,4,5,6};
//     vector<vector<int>>res = construct2DArray(v,3,2);
//     for(auto &i:res){
//         for(auto &j:i){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }
//-------------------------------------------------------------------------------------------------------------------------------------------
//                                          SPIRAL MATRIX 54
// #include<iostream>
// #include<vector>
// using namespace std;
// vector<int> spiralOrder(vector<vector<int>>& matrix) {
//     int m = matrix.size();    //for size of row
//     int n = matrix[0].size();      //size for columns
// //now defining top,down,left and right
//     int top = 0;     int left = 0;
//     int down = m-1;     int right = n-1;
//     vector<int>ans;
//     while(top<=down && left<=right){
//         //now adding 1st row elem of spiral matrix
//         for(int i=left;i<=right;i++){
//             ans.push_back(matrix[top][i]);    //it means row is fixed but columns is changing
//         }
//         top++;

//         for(int i=top;i<=down;i++){
//             ans.push_back(matrix[i][right]);    //it means columns is fixed but columns is changing
//         }
//         right--;
        
// //now checking if we elem in last row of spiral or not
//         if(top<=down){
//             for(int i=right;i>=left;i--){
//                 ans.push_back(matrix[down][i]);
//             }
//             down--;
//         }
//         if(right>=left){
//             for(int i=down;i>=top;i--){
//                 ans.push_back(matrix[i][left]);
//             }
//             left++;
//         }

//     }
//     return ans;
   
// }           
// int main(){
//     vector<vector<int>>v ={{1,2,3,4,5},{6,7,8,9,10}};
//    vector<int>val = spiralOrder(v);
//     for(int i:val){
//         cout<<i<<" ";
//     }
// }
//-------------------------------------------------------------------------------------------------------------------------------------------
// #include<iostream>
// #include<vector>
// using namespace std;
// vector<int> tutques(vector<int>&v){      // 1 2 3 4 5 6 7
//     vector<int>a;
//     vector<int>b;
//     vector<int>res;
//     for(int i:v){
//         if(i%2==0){
//             b.push_back(i);
//         }
//     }
//     for(int i:v){
//         if(i%2==1){
//             a.push_back(i);
//         }
//     }
//     for(int i = b.size()-1;i>=0;i--){
//         res.push_back(b[i]);
//     }
//     for(int j = 0;j<a.size();j++){
//         res.push_back(a[j]);
//     }
//     return res;
// }
// int main(){
//     vector<int>r ={1,2,3,4,5,6,7};
//     vector<int>a = tutques(r);
//     for(int i=a.size()-1;i>=0;i--){
//         cout<<a[i]<<" ";
//     }
// }
//-------------------------------------------------------------------------------------------------------------------------------------------
// Given an unsorted array of integers in the range from 0 to n-1. We are allowed to swap 
// adjacent elements in array many number of times but only if the absolute difference between these 
// element is 1. Check if it is possible to sort the array. If yes then print “yes” else “no”. 
//  (Microsoft) [15 Mins] 
// Example: Input : arr[] = {1, 0, 3, 2}
//  Output : yes
// Input : arr[] = {2, 1, 0}
//  Output : no
// #include<iostream>
// #include<vector>
// #include<algorithm>
// bool flipkart(vector<int>v){
//     vector<int>r ={1,0,3,2};
//     for(int i=0;i<r.size()-1;i++){
//         for(int j= i+1;j<r.size();j++){
//             if(abs(r[i]-r[j])==1){
//                 swap(r[i],r[j]);
//             }
//         }
//     }
//     for(int i= 0;i<r.size()-1;i++){
//         if(r[i]>r[i+1]){
//             return false;
//         }
//     }
//     return true;
// }
// using namespace std;
// int main(){
//     vector<int>r ={1,0,3,2};
//     for(int i=0;i<r.size()-1;i++){
//         for(int j= i+1;j<r.size();j++){
//             if(abs(r[i]-r[j])==1){
//                 swap(r[i],r[j]);
//             }
//         }
//     }
//     for(int i= 0;i<r.size()-1;i++){
//         if(r[i]>r[i+1]){
//             cout<<"NO";
//             break;
//         }
//     }
//     cout<<"Yes";
// }
//-------------------------------------------------------------------------------------------------------------------------------------------
//                              0 IN LEFT AND 1 IN RIGHT SIDE
// #include<iostream>
// #include<vector>
// using namespace std;
// vector<int> seg(vector<int>&v){
//     vector<int>a;
//     for(int i=0;i<v.size();i++){
//         if(v[i]==0){
//             a.push_back(v[i]);
//         }
//     }
//     for(int j:v){
//         if(j==1){
//             a.push_back(j);
//         }
//     }
//     return a;
// }
// int main(){
//     vector<int>v={1,0,0,1,0,1,0,1,1,0};
//     vector<int>ans = seg(v);
//     for(int i:ans){
//         cout<<i<<" ";
//     }
// }
//-------------------------------------------------------------------------------------------------------------------------------------------
//                              0 IN LEFT AND others IN RIGHT SIDE by mutl by 2
// #include<iostream>
// #include<vector>
// using namespace std;
// vector<int> applyOperations(vector<int>& nums) {
//         vector<int>ans;
//         int n = nums.size();
//         int idx = 0;
//         for(int i=0;i<n;i++){
//             if(nums[i]!=0){
//                 ans[idx] = nums[i];
//                 idx++;
//             }
//             if(nums[i] == nums[i+1]){
//                 ans[idx] = 2*nums[i];      
//                 idx++;
//             }
//         }
//         return ans;
// }
// int main(){
//     vector<int>v={1,2,2,1,1,0};
//     vector<int>ans = applyOperations(v);
//     for(int i:ans){
//         cout<<i<<" ";
//     }
// }
// //---------------------------------------------------------------------------------------------------------------------------------------------------------------------
// /*Given an array of integers nums, sort the array in increasing order based on the frequency of the values. If multiple values have the same frequency,
// return the small int.*/
// //ip = {1,1,2,3,3} o/p = {3,1,2}
// #include<iostream>
// #include<unordered_map>
// #include<vector>
// #include<algorithm>
// using namespace std;
// vector<int> freqSort(vector<int> &nums){
//     vector<int>ans;
//     unordered_map<int,int>mp;
//     for(int i:nums){
//         mp[i]++;
//     }
//     //defining custom comp using lamda function
//     auto comp = [&](int a,int b){
// //if both have same freq return small int
//         if(mp[a]==mp[b]){
//             return b>a;   //ascending order (a > b).
//         }
// //if don't have same freq sort them acc to ascending freq
//         return mp[a] > mp[b];  // the number with the higher frequency comes first.
//     };
//     sort(nums.begin(),nums.end(),comp);
//     return nums;
// }
// int main(){
//     vector<int>v = {1,1,2,3,3};
//      vector<int>ans = freqSort(v);
//     for(int i:ans){
//         cout<<i<<" ";
//     }
// }
//---------------------------------------------------------------------------------------------------------------------------------------------------------------------
//                                  LARGEST NUMBER (prblm-179)
// #include<iostream>
// #include<vector>
// #include<algorithm>
// #include<string>
// using namespace std;
// string largestNumber(vector<int>& nums) {
//     string ans="";
//     //applying custom sorting
//     auto comp = [&](int &a,int &b){
//         return to_string(a)+to_string(b) > to_string(b)+to_string(a);
//     };
//     sort(nums.begin(),nums.end(),comp);
//     for(int i:nums){
//         ans+=to_string(i);
//     }
//     return ans;
// }
// int main(){
//     vector<int>v = {10,2};
//     string ans = largestNumber(v);
//     cout<<ans;
// }
//---------------------------------------------------------------------------------------------------------------------------------------------------------------------
//                                  Long Pressed Name (prblm-925)
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
bool isLongPressedName(string name, string typed) {
   int i=0,j=0;
   while(j<typed.size()){
        if(name[i] == typed[j]){
            i++;j++;
        }else if(j>0 && typed[j] == typed[j-1]){
            j++;
        }else{
            return false;
        }
   }
   return i==name.size();
}
int main(){
    string n = "vtkgn";
    string t = "vttkgnn"; 
    bool ans = isLongPressedName(n,t);
    cout<<boolalpha<<ans;
}