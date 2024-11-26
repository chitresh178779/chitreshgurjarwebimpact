#include<iostream>
#include<stack>
using namespace std;
int main()
{  
    string s;
    cin>>s;
    stack<char> st;
    int i=0;
    int valid=1;
    while(s[i]!='\0'){
        st.push(s[i]);
        i++;
    }
    st.pop();
    i=0;
    while(!st.empty()){
        if((s[i]=='('&& st.top()==')')||(s[i]=='{'&& st.top()=='}')||(s[i]=='['&& st.top()==']')){
            st.pop();
        }
        else{
            valid=0;
            break;
        }
        i++;
    }
    if(valid==1){
        cout<<"valid parenthesis";
    }
    else{
        cout<<"invalid parenthesis";
    }
    return 0;
}