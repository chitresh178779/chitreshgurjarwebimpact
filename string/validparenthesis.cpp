#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    int v=1;
    cout<<"enter the combination of parenthesis: ";
    cin>>s;
    int n=s.length();
    for(int i=n;i>=0;i++){
        if(s[i]=='('){
            if(s[n-i+1]==')'){
                continue;
            }
            else{
                v=0;
            }
        }
        else if(s[i]=='['){
            if(s[n-i+1]==']'){
                continue;
            }
            else{
                v=0;
            }
        }
        else if(s[i]=='{'){
            if(s[n-i+1]=='}'){
                continue;
            }
            else{
                v=0;
            }
        }
    }
    if(v==1){
        cout<<"valid";
    }
    else{
        cout<<"invalid";
    }
    return 0;
}