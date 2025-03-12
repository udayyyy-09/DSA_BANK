/*THIS FILE CONTAIN VECTORS BASICS🚨 TO SOLVE LEETCODE QUESTION
YOU CAN RUN ANY CODE ACCORDING TO YOURSELF BY UNCOMMENT THE LINE✅
YOU CAN ALSO ADD YOUR OWN CODE ACCORDING TO YOUR NEEDS😄
*/

// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     vector<int> v;     //we can also define it's size by v(size);
//     //adding elements in vectors
//     for(int i=0;i<4;i++)
//     {
//         int elem;
//         cin>>elem;
//         v.push_back(elem);        //1ST function to add elements in vectors
//     }
//     //printing the elements in vectors
//     for(int temp : v)
//     {
//         cout<<temp<<" ";
//     }
//     cout<<endl;
//     //printing the size
//     //cout<<"Size: "<<v.size();
//     cout<<endl;
//     //cout<<"Capacity: "<<v.capacity();  // capacity means how much memory it is taking for element and cap>=size
//     //print the first element in vectors
//    // cout<<endl<<"First element: ";
//    // cout<<v.front();
//     //print last element
//     //cout<<endl<<"Last element ";
//     //cout<<v.back();
//     //insert elem at specific pos
//     // v.insert(v.end()-2,3);     //.insert(pos,elem)
//     // cout<<endl;
//     // for(int temp : v)
//     // {
//     //     cout<<temp<<" ";
//     // }  
//     //delete element at specific pos
//     // v.erase(v.begin()+1);
//     // for(int temp : v)
//     // {
//     //     cout<<temp<<" ";
//     // }  

//     //get element at specific pos
//     cout<<v.at(3);
// }
//------------------------------------------------------------------------------------------------------------
//    QUESTION ON VECTORS  PRINT THE INDEX NO. OF LAST OCCURENCE OF X DIGIT

// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     vector<int>v;
//     for(int i=0;i<4;i++)
//     {
//         int elem;
//         cin>>elem;
//         v.push_back(elem);
//     }
//     cout<<endl<<"Original Array: ";
//     for(int temp: v)
//     {
//         cout<<temp<<" ";
//     }
//     int occ=-1;
//     int val;
//     cin>>val;
//     for(int i=v.size()-1;i>=0;i--)
//     {
//         if(v[i]==val)
//         {
//             occ=i;
//             break; 
//         }
//     }
//     cout<<endl<<"Occ: "<<occ;
// }
