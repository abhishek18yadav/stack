#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/asteroid-collision/solutions/
vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int>res;
        vector<int>empty(0);
        stack<int>st;
        for(int i=0; i<asteroids.size();i++){
            if(st.empty()){
                st.push(asteroids[i]);
            }else if(asteroids[i]<0){
                while(!st.empty() and st.top()>0 and st.top()<= abs(asteroids[i])){
                    if(st.top()< abs(asteroids[i]))st.pop();
                    else{ 
                        st.pop();
                        }
                }
                if(st.top()>abs(asteroids[i])){
                    st.push(asteroids[i]);
                    st.pop();
                }
                else  st.push(asteroids[i]);
            }
            else st.push(asteroids[i]);
        }
        stack<int>st2;
        res.resize(st.size());
         while(!st.empty()){
            st2.push(st.top());
            st.pop();
         }
         while(!st2.empty()){
            res.push_back(st2.top());
            st2.pop();
         }
        return ((res.size()==0)? empty : res);
    }
int main(){
    vector<int>asteroids{5-5};
    vector<int>ans=asteroidCollision(asteroids);
    for(int ele : ans){
        cout<<ele<<" ";
    }
    return 0;
}