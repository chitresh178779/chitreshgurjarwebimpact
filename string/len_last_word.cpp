#include<iostream>
#include<stack>
using namespace std;
void lenlastword(stack<char> st){
    cout<<st.size();
}
int main(){
    string s;
    getline(cin,s);
    stack<char> st;
    int n=s.length();
    int i=n-1;
    while(i>=0 && s[i]!=' '){
        st.push(s[i]);
        i--;
    }
    lenlastword(st);
    return 0;
}