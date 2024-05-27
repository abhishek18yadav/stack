// js solution
/**
 * var isValid = function(s) {
    let a=[];
    let flag=true;
    for(let i=0; i<s.length; i++){
        if(a.length==0)a.push(s[i]);
        else if((a[a.length-1]=='(' && s[i]==')') ||( a[a.length-1]=='[' && s[i]==']' ) ||  (a[a.length-1]=='{' && s[i]=='}')){
            console.log(a[a.length-1]);
            a.pop();
        }
        else  a.push(s[i]);
         
    }
    if(a.length!=0)flag = false;
        return flag;
};
*/
// cpp sol;
#include<bits/stdc++.h>
using namespace std;

bool isValid(string s) {
        stack<char>st;
        for(int i=0; i<s.length(); i++){
            if(st.empty()){
                st.push(s[i]);
            }else if(st.top()=='(' and s[i]==')' or  st.top()=='[' and s[i]==']'  or  st.top()=='{' and s[i]=='}'){
                st.pop();
            }
            else st.push(s[i]);
        }
        return st.size()==0;
}
int main(){
    cout<<isValid("({{[]}})[{[]}]");
}