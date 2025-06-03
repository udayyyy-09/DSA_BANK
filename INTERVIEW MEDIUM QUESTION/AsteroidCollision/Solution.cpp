#include<bits/stdc++.h>
using namespace std;

vector<int> asteroidCollision(vector<int>& ast) {
    stack<int>st;
    vector<int>v;
    for(int i=0;i<ast.size();i++){
        if(ast[i] > 0 || st.empty()){
            st.push(ast[i]);
        }else{
            //now when asteriod come with negative value(direction in opp. side) we are going to collide with last one ast which get in stck
            while(!st.empty() && st.top() > 0 && st.top() < abs(ast[i])){
                st.pop();       // suppose 2 < 12 2 will pop and so on
            }
            //if 12 > 10 then? we are going to do some edge cases
            if(!st.empty() && st.top() == abs(ast[i])){
                st.pop();    // ex: 8 -8 both will be destoyed
            }else{
                if(st.empty() || st.top() < 0){
                    st.push(ast[i]);
                }
            }
        }
    }   
    while(!st.empty()){
        v.push_back(st.top());
        st.pop();
    }   
    reverse(v.begin(),v.end());
    return v;
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    vector<int > ast(n);
    cout<<"Enter Asteroids: ";
    for(int i=0;i<n ;i++){ 
        cin>> ast[i]; 
    }
    vector<int > ans = asteroidCollision(ast);
    cout<<"Asteroids after collision: ";
    for(int i:ans){
        cout<<i<<" ";
    }
}