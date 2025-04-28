/*      Leetcode -> 1732        Find the Highest Altitude( https://leetcode.com/problems/find-the-highest-altitude/?envType=study-plan-v2&envId=leetcode-75 )

        My Solution:   (  https://leetcode.com/problems/find-the-highest-altitude/solutions/6695480/beginner-approach-direct-code-by-udayyyy-qdrh )
*/

#include<bits/stdc++.h>
using namespace std;
int largestAltitude(vector<int>& gain){
    vector<int>temp(gain.size()+1);
        temp[0] = 0;
        temp[1] = gain[0];
        int maxi = gain[0];
        int idx = 2;
        for(int i = 1;i<gain.size();i++){
            maxi += gain[i];
            temp[idx] = maxi;
            idx++;
        }
        int ans = temp[0];
        for(int i:temp){
            if(ans <= i){
                ans = i; 
            }
        }
        return ans;
}

int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;
    vector<int>gain(n);
    cout<<"Enter elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>gain[i];
    }
    int ans = largestAltitude(gain);
    cout<<"Highest Altitude: "<<ans;
}