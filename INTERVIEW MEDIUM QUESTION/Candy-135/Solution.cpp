#include<bits/stdc++.h>
using namespace std;
int candy(vector<int>& ratings) {
        int mincandies = 0;
        if(ratings.size() == 1) return 1;

        vector<int>v(ratings.size(),1);
        //left pass 
        for(int i = 1;i<ratings.size();i++){
            if(ratings[i] > ratings[i-1]){
                v[i] = v[i-1]+1;
            }
        }
        //right pass
        for(int i =ratings.size()-2;i>=0;i--){
            if(ratings[i] > ratings[i+1] ){
                v[i] = max(v[i],v[i+1]+1); 
            }
        }
        for(int i:v){
            mincandies += i;
        }
        return mincandies;
       
        
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    vector<int>ratings(n);
    cout<<"Enter ratings: ";
    for(int i = 0;i<n;i++){
        cin>>ratings[i];
    }
    cout<<"Minimum candies needed: "<< candy(ratings)<<endl;
}