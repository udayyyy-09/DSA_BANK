// #include<iostream>
// #include<vector>
// using namespace std;
// void Merge(vector<int>&arr,int l, int r,int m){
//     int st = l;
//     int end = m+1;
//     vector<int>temp;
//     while(st<=m && end<=r){
//         if(arr[st]>=arr[end]){
//             temp.push_back(arr[end]);
//             end++;
//         }else{
//             temp.push_back(arr[st]);
//             st++;
//         }
//     }
//     while(st<=m){
//         temp.push_back(arr[st]);
//             st++;
//     }
//     while(end<=r){
//         temp.push_back(arr[end]);
//             end++;
//     }
//     for(int i=0;i<temp.size();i++){
//         arr[l+i] = temp[i];
//     }
// }
// void MergeSort(vector<int>&arr,int l,int r){
//     if(l>=r) return;
//     int m = l+(r-l)/2;
//     MergeSort(arr,l,m);
//     MergeSort(arr,m+1,r);
//     Merge(arr,l,r,m);
// }
// int main(){
//     vector<int>v = {1,3,6,8,2};
//     MergeSort(v,0,v.size()-1);
//     for(int i:v){
//         cout<<i<<" ";
//     }
// }

//                      IMPLEMENTING USING ARRAY
#include<iostream>
#include<vector>
using namespace std;
void Merge(int arr[],int l, int r,int m){
    //copy left and half array elements into separated array
    int n1 = m-l+1;
    int n2 = r-m;
    int larr[n1];
    int rarr[n2];
    for(int i=0;i<n1;i++){
        larr[i] = arr[l+i];
    }
    for(int i=0;i<n2;i++){
        rarr[i] = arr[m+1+i];
    }
    int i=0; int j=0; int k = l;
    while(i<n1 && j<n2){
        if(larr[i]<=rarr[j]){
            arr[k] = larr[i];
            i++;
        }else{
            arr[k] = rarr[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        arr[k] = larr[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k] = rarr[j];
        j++;
        k++;
    }

}
void MergeSort(int arr[],int l,int r){
    if(l>=r) return;
    int m = l+(r-l)/2;
    MergeSort(arr,l,m);
    MergeSort(arr,m+1,r);
    Merge(arr,l,r,m);
}
int main(){
    int ar[] = {1,5,8,3,9};
    int n = sizeof(ar)/sizeof(ar[0]);
    MergeSort(ar,0,n-1);
    for(int i=0;i<n;i++){
        cout<<ar[i]<<" ";
    }
}








