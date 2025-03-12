//all important ques are done in this file..

// //  QUES-1  -> WAP to reverse the array.
// #include<iostream>
// using namespace std;
// int main()
// {
//     cout<<"Enter size: ";
//     int n;  
//     cin>>n;
//     cout<<"Enter array elements"<<endl;
//     int arr[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     cout<<"Original Array: ";
//     for(int i=0;i<n;i++)
//     {
//         cout<<" "<<arr[i];
//     }

//     cout<<endl<<"Reversed array: ";
//     for(int i=n-1;i>=0;i--)
//     {
//         cout<<" "<<arr[i];
//     }
// }
//-----------------------------------------------------------------------------------------------------------

//QUES-2      WAP to reverse the string
// #include<iostream>
// using namespace std;
// string reverse(string str);

// string reverse(string str)
// {
//     int n = str.length();
//     for(int i=0;i<n/2;i++)
//     {
//         char temp=str[i];
//         str[i]=str[n-i-1];
//         str[n-i-1]=temp;
//     }
//     return str;
// }
// int main()
// {
//     string str[] = {"uday","helo","bisl"};
//     cout<<"Original string: ";
//     for(int i=0;i<3;i++)
//     {
//         cout<<str[i]<<" ";
//     }
//     cout<<endl<<"Reverse string: ";
//     for(int i=0;i<3;i++)
//     {
//         cout<<reverse(str[i])<<" ";
//     }

// }

//----------------------------------------------------------------------------------------------------------------------------
//QUES->3    WAP to print element in ascending or descending order

// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"array elements: ";
//     int arr[6]={3,8,4,7,1};
//     for(int i=0;i<6;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     // cout<<endl<<"Ascending order array: ";
//     for(int i=0;i<6;i++)
//     {
//         for(int j=i+1;j<6;j++)
//         {
//             if(arr[i]>arr[j])   //for descending order just reverse the sign
//             {
//                 int temp = arr[i];
//                 arr[i]=arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }
//     cout<<endl<<"Ascending order array: ";
//     for(int i=0;i<6;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }
//-------------------------------------------------------------------------------------------------------------

//QUES->4
//WAP to insert element by removing that element from inserted positions
// #include<iostream>
// using namespace std;

//     void insertbyrem(int arr[],int size,int pos, int val)
//     {
//         for(int i=pos;i>=size-1;i--)
//         {
//             arr[i]= arr[i+1];
//         }
//         arr[pos] = val;
//     }

//     void insertwithoutrem(int arr[],int size,int pos, int val)
//     {
//         for(int i=size-1;i>=pos;i--)
//         {
//             arr[i+1]= arr[i];
//         }
//         arr[pos] = val;
//     }

// int main()
// {
//     int size;
//     cout<<"Enter size of array: ";
//     cin>>size;
//     cout<<endl<<"Enter array elements: ";
//     int arr[size];
//     for(int i=0;i<size;i++)
//     {
//         cin>>arr[i];
//     }
//     cout<<endl<<"Array: ";
//     for(int i=0;i<size;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     int pos;
//     cout<<endl<<"Enter position: ";
//     cin>>pos;
//     int val;
//     cout<<endl<<"Enter value at that position: ";
//     cin>>val;
//     // for(int i=size-1;i>=pos;i--)
//     // {
//     //     arr[i+1]= arr[i];
//     // }
//     insertbyrem(arr,size,pos,val);
//     insertwithoutrem(arr, size, pos,val);
//     cout<<endl<<"New array: ";
//     for(int i=0;i<size;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl<<"Array without removing that element: ";
//     //insertwithoutrem(arr, size, pos,val);
//     // cout<<endl<<"New array: ";
//     // for(int i=0;i<size;i++)
//     // {
//     //     cout<<arr[i]<<" ";
//     // }
// }
//-------------------------------------------------------------------------------------------------------------------------

// #include <iostream>
// using namespace std;

// void insertAtPosition(int arr[], int size, int element, int pos) {
//     // Check if the position is valid
//     if (pos >= 0 && pos < size) {
//         // Insert the element by overwriting the existing element at 'pos'
//         arr[pos] = element;
//     } else {
//         cout << "Invalid position!" << endl;
//     }
// }

// void printArray(int arr[], int size) {
//     for (int i = 0; i < size; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// int main() {
//     // Example array
//     int arraySize = 6;
//     int myArray[6] = {10, 20, 30, 40, 50};

//     cout << "Original array: ";
//     printArray(myArray, arraySize);

//     // Element to insert and the position to insert at
//     int newElement = 99;
//     int position = 2; // Array positions are zero-indexed

//     // Function call to insert the element
//     insertAtPosition(myArray, arraySize, newElement, position);

//     cout << "Updated array: ";
//     printArray(myArray, arraySize);

//     return 0;
// }
//-------------------------------------------------------------------------------------------------------------------------
// #include<iostream>
// using namespace std;
// int fibonacci(int n)
// {
//    if(n<=1)
//    {
//         return -1;
//    }else 
//    {
//         return fibonacci(n-1)+fibonacci(n-2);
//    }
// }

// int main()
// {
//     //Implementing fibonacci series using loop
//     cout<<"Enter number: ";
//     int num;
//     cin>>num;
//     int prev1=0;
//     int prev2=1;
//     fibonacci(num);
// }
//---------------------------------------------------------------------------------------
//QUESTION - Given an array of size N-1 such that it only contains distinct 
//integers in the range of 1 to N. Find the missing element.

// #include<iostream>
// using namespace std;
// int missingNumber(int array[], int N) {
//         // Your code goes here
//         int totalsum = ((N+1)*(N+2))/2;
//         int arraysum =0;
//         for(int p=0;p<N;p++)
//         {
//             arraysum+=array[p];
//         }
//         return totalsum-arraysum;
//     }
// int main()
//     {
//         cout<<"N = ";
//         int n;
//         cin>>n;
//         cout<<"A[] = ";
//         int size =n-1;
//         int arr[size];
//         for(int i=0;i<size;i++)
//         {
//             cin>>arr[i];
//         }
//         int findelement = missingNumber(arr,size);      
//         cout<<"Missing element: "<<findelement;  
//     }
//-------------------------------------------------------------------------------------------------------------------------------------

//QUESTION - FINDING DUPLICATES IN ARRAYS
// #include<iostream>
// using namespace std;
// void duplicates(int a[], int n)   //{1,2,3,2}
// {
//     for(int i=0;i<n;i++)
//     {
//         int temp;
//         bool duppresent=false;
//         for(int j=i+1;j<n;j++)
//         {
//             if(a[i]==a[j])
//             {
//                 duppresent = true;
//                 temp = a[i];
//             }
//         }
//         if(duppresent)
//         {
//             cout<<temp<<" ";
//         }
//     }
// }
// int main()
// {
//     int arr[6]={1,2,3,2,3};
//     cout<<"Duplicate number is: ";
//     duplicates(arr,6);
// }
//--------------------------------------------------------------------------------------------------------------------------
/*QUESTION - Given an array of N integers, and an integer K, find the number of pairs of elements in the array 
whose sum is equal to K.
input:
N = 4, K = 7
arr[] = {1, 6, 7, 1}
Output: 2
Explanation: 
arr[0] + arr[1] = 1 + 6 = 7 
// and arr[1] + arr[3] = 6 + 1 = 7.  */

// #include<iostream>
// using namespace std;
// int pairs(int a[], int n, int sum)   //{6,6,6,6}
// {
//     int count=0;
//     for(int i=0;i<n-1;i++)
//     {
//         for(int j=i+1;j<n;j++)
//         {
//             if(a[i]+a[j]==sum)
//             {
//                 count++;
//             }
//         }
//      }
//     return count;

// }
// int main()
// {
//     cout<<"Enter Integers: ";
//     int N;
//     cin>>N;
    
//     cout<<"Enter K: ";
//     int k;
//     cin>>k;
//     int arr[N];
//     for(int i=0;i<N;i++)
//     {
//         cin>>arr[i];
//     }
//     cout<<"Number of pairs: ";
//     int obj = pairs(arr,N,k);
//     cout<<obj;
// }
//-----------------------------------------------------------------------------------------------------------------------------------------
/*QUESTION - FINDING EQUILIBRIUM POSITION n = 6 
A[] = {1,3,6,2,2} 
Output: 
3........explain  equilibrium point is at position 3 as sum of elements before it (1+3) = sum of elements after it (2+2). 
*/ 
// #include<iostream>
// using namespace std;
// int equilibrium(int a[], int s,int end,int n)   //{6,6,6,6,6}
// {
//     int m = (s+end)/2;
//     int leftsum=0;
//     int rightsum=0;
//     int i=0;
//     for(;i<m;i++)
//     {
//         leftsum +=a[i];
//     }
//     for(int j=m+1;j<end;j++)
//     {
//         rightsum+=a[j];
//     }
//     if(leftsum==rightsum)
//     {
//         return i+1;
//     }else{
//         return -1;
//     }
// }
// int main()
// {
//     int arr[6]={6,2,6,6,6};
//     int pos = equilibrium(arr,0,6,6);
//     if(pos!=-1)
//     {
//          cout<<pos;
//     }else{
//         cout<<"Equilibrium position Not Found";
//     }
// }
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------
//     TOPIC -                 INSERION,DELETION,SEARCHING IN UNSORTED ARRAY
//1 -  SEARCHING
// #include<iostream>
// using namespace std;
// int search(int a[], int n,int num)     //{2,3,6,6}
// {
//     for(int i=0;i<n;i++)
//     {
//         if(a[i]==num)
//         {
//             return i;
//         }     
//     }
//     return -1;
// }
// int main()
// {
//     int arr[4]={2,3,6,6};
//     cout<<"Enter number you want to search: ";
//     int num;
//     cin>>num;
//     int pres= search(arr,4,num);
//     if(pres!=-1)
//     {
//         cout<<"Element present at index: "<<pres;
//     }
//     else{
//         cout<<"Element not present";
//     }
// }
// -          -          -           -            -           -             -           -           -         -           -           - 
//2 -         INSERTION AT SPECIFIC POSITION
// #include<iostream>
// using namespace std;
// int  insertpos(int a[], int n,int num,int pos)     //{2,3,6,6}
// {
//     if(pos<n)
//     {
//          for(int i=n-1;i>=pos;i--)  //shift element to right which is right side of insert pos
//     {
//         //for adding element at specific position I want to make space to add element
//         a[i+1]=a[i];    
//     }
//     a[pos]=num;
//     }else{
//         return -1;
//     } 
// }
// int main()
// {
//     int size=4;
//     int arr[size]={2,3,6,6};
//     cout<<"Enter number you want to add in array: ";
//     int num;
//     cin>>num;
//     cout<<"Enter position(or index) where you wanted to insert: ";
//     int pos;
//     cin>>pos;
//     int obj = insertpos(arr,size,num,pos);
//     if(obj!=-1)
//     {
//         for(int i=0;i<=size;i++)
//         {
//             cout<<arr[i]<<" ";
//         }
//     }else{
//         cout<<"WRONG POSITION";
//     }    
// }
//------ -------- --------       ----------   ----------        -----------         ----------           -----------         ----------          ----------
//                     DELETE ELEMENT BY PROVIDING NUMBER

// #include<iostream>
// using namespace std;
// //First we made a method to iterate though the array and find the position of element which has to be deleted
// int findelement(int a[],int n,int val)
// {
//     for(int i=0;i<n;i++)
//     {
//         if(a[i]==val)
//         {
//             return i;
//         }
//     }
//     return -1;
// }
// //Now I am gonna use above method in delete method to get position of delete element and perform delete function.....
// int deletion(int a[], int n,int val)     //{2,3,6,6}
// {
//     int pos = findelement(a,n,val);
//     int i;
//     if(pos==-1)      //the pos which comes from above method check it if its valid or not
//     {
//         cout<<"Element not found "<<endl;
//         return n;    //return the original size of array
//     }
//     else{
//         for(i=pos;i<n;i++)
//         {
//             a[i]=a[i+1];
//         }  
//     return n-1;   
//     }   
// }
// int main()
// {
//     int size=4;
//     int arr[size]={2,3,6,6};
//     cout<<"Enter number you want to delete in array: ";
//     int num;
//     cin>>num;
//     size=deletion(arr,size,num);
//     for(int i=0;i<size;i++)
//     {
//         cout<<arr[i]<<" ";
//     } 
// }
//------------        --------------        ---------------          ------------         --------------            ------------          
//                                TWO POINT APPROACH CONCEPT QUESIION
//                       RETURN THE MIDDLE ELEMENT OF array
// #include<iostream>
// using namespace std;
// // int middleElement(int arr[], int n)//    1,2,3,4,6
// // {
// //     if(n==0)
// //     {
// //         return -1;
// //     }
          //if(n==1)
        //   {
        //      return n;
        //   }
// //     if(n%2==0)
// //     {
// //         return -1;
// //     }
// //     int middleindex = n/2;
// //     return arr[middleindex];
// // }
// void deletemiddleElement(int arr[], int n)
// {
//     if(n==0)
//     {
//         cout<<"List is empty"<<endl;
//     }
//     if(n%2==0)
//     {
//         cout<<"No middle element"<<endl;
//     }
//     int middle = n/2;
//     for(int i=middle;i<n-1;i++)
//     {
//         arr[i]=arr[i+1];
//     }
// }
// int main()
// {
//     int size=4;
//     int size2=6;
//     int a[size]={1,2,3,4};
//     int a2[size2]={1,2,3,4,6};
//     deletemiddleElement(a2,size2);
//     for(int i=0;i<size2-1 ;i++)
//     {
//         cout<<a2[i]<<" ";
//     }
// }
//----------------------------------------------------------------------------------------------------------------------------------------
//QUESTION:      REMOVE DUPLICATE FROM UNSORTED ARRAY
// #include <iostream>
// using namespace std;

// void remdup(int arr[], int& n) {     //we have to take reference of n as we have to change the size of array
//   int j=0;
//   int dupcount=0;
//     for(int i=0;i<n;i++)
//     {
//       bool notfound =false;
//         if(arr[i]!=arr[i-1])
//         {
//             notfound = true;
//         }else{
//           dupcount++;
//         }
//         if(notfound)
//         {
//             arr[j++] = arr[i];
//         }
//     }
//     cout<<"Number of duplicates found: "<<dupcount<<endl;
//     n=j;
// }

// int main() {
//     int array[6] = {1, 2, 2, 5, 5, 5};
//     int size = 6;
    
//     remdup(array, size);

//     for (int i = 0; i < size; i++) {
//         cout << array[i] << " ";
//     }

//     return 0;
// }
//------------------------------------------------------------------------------------------------------------------------------------
//
// #include<iostream>
// using namespace std; // namespace std
// void sort(int arr[],int l, int r)
// {
//     while(l<r)
//     {
//         int temp =  arr[l];
//         arr[l] = arr[r];
//         arr[r]=temp;
//         l++;
//         r--;
//     }
// }
// int twoSum(int arr[], int n, int target)
// {
//     //first sort the array
//     sort(arr,0,n);
//     int left =0;
//     int right =n-1;
//     while(left<right)
//     {
//         int sum = arr[left]+arr[right];
//         if(sum==target)
//         {
//             return left,right;
//         }else if(sum<target)
//         {
//             left++;
//         }else{
//             right--;
//         }
//     }
// }
// int main() {
//     int array[6] = {1, 4, 2, 7, 3};
//     int size = 6;
//     int val,val2 = twoSum(array,size,0);
//     cout<<val<<" "<<val2;

//     return 0;
// }

//--------------------------------------------------------------------------------------------------------------------------------------
//QUESTION-     FIND THE FIRST  AND OCCURENCE OF THE GIVEN NUMBER IN sorted ARRAY
// #include<iostream>
// using namespace std;
// //if I used binary search in this then it will be good choice as T.C.= O(logn)
// int firstocc(int arr[],int n,int target)    //1,1,2,2,2,3
// {
//     int st=0; int e=n-1;  int occur=-1;
//     while(st<=e)
//     {
//         int m=st+(e-st)/2;
//         if(arr[m]==target)
//         {
//             occur=m;
//             e=m-1;
//         }else if(arr[m]>target)
//         {
//             e=m-1;
//         }else{
//             st=m+1;
//         }
//         m=st+(e-st)/2;
//     }
//     return occur;
// }
// int lastocc(int arr[],int n,int target)    //1,1,2,2,2,3
// {
//     int st=0; int e=n-1;  int occur=-1;
//     while(st<=e)
//     {
//         int m=st+(e-st)/2;
//         if(arr[m]==target)
//         {
//             occur=m;
//             st=m+1;
//         }else if(arr[m]>target)
//         {
//             e=m-1;
//         }else{
//             st=m+1;
//         }
//         m=st+(e-st)/2;
//     }
//     return occur;
// }
// int main(){
//     int a[6]={1,1,2,2,2,5};
//     int val; 
//     cout<<"Enter value: ";
//     cin>>val;
//     int valu = firstocc(a,6,val);
//     int v = lastocc(a,6,val);
//     if(v!=-1 && valu!=-1)
//     {
//             cout<<endl<<"First and last Occurence of given value: "<<valu<<" ,"<<v;
//     }else{
//       cout<<"Element not found";
//     }
// }
//-------------------------------------------------------------------------------------------------------------------------
////QUESTION->        RETURN THE NUMBER OF INDICES 
// #include<iostream>
// using namespace std;
// void dup(int arr[], int n)     //   1,2,2,4,1
// {
//     bool found = false;
//     int count=0;
//     for(int i=0;i<n-1;i++)
//     {
//         if(arr[i]==-1)
//         {
//           continue;
//         }
//       // bool found = false;
//       for(int j=i+1;j<n;j++)
//       {
//           if(arr[i]==arr[j])
//           {
//               arr[j]=-1;
//               found =true;
//               count++;
//               cout<<j<<" "<<endl;             //printing the index number
//           }
//       }
//     }
//     cout<<"Duplicate repeates "<<count<<" times.";
// }
// int main()
// {
//     int a[7]={1,2,2,4,1,1,2};
//     cout<<endl;
//     dup(a,7);
// }
#include<iostream>
#include<vector>
using namespace std;
bool SubsetSum(vector<int>&nums,int sum){
    int n= nums.size();
    vector<vector<int>>dp(n+1,vector<int>(sum+1));
    for(int i=1;i<=n;i++){
        for(int j = 0;j<=sum;j++){
            if(nums[i-1] >j){
                dp[i][j] = dp[i-1][j];
            }else{
                dp[i][j] = (dp[i-1][j] || dp[i-1][j-nums[j-1]]);
            }
        }
    }
    return dp[n][sum];

}
int main(){
    vector<int>v = {2,3,7,8,11};
    bool ans = SubsetSum(v,11);
    cout<<boolalpha<<ans;
}







